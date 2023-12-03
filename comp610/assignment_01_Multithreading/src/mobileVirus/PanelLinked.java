package mobileVirus;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ComponentEvent;
import java.awt.event.ComponentListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class PanelLinked extends JPanel implements KeyListener, ComponentListener {

	private int numPhones;
	private int numInfected;
	private int numRepair;
	public int boundW;
	public int boundH;
	private int transmitRange;
	private Repair repair;

	private LinkedList<Phone> phoneList;

	public PanelLinked(int boundW, int boundH) {
		this.addKeyListener(this);
		this.addComponentListener(this);
		this.setFocusable(true);

		this.boundW = 1000;
		this.boundH = 1000;
		this.numPhones = 0;
		this.numInfected = 0;
		this.numRepair = 0;
		this.transmitRange = 20;
		this.repair = new Repair(450, 400); // synchronized, monitor
		this.phoneList = new LinkedList<>();
	}

	public void paint(Graphics g) {
		super.paintComponent(g);
		g.drawString("++[Repair Shop]++", 400, 400);
		drawPhones(g);
		drawUI(g);
		repaint(); // refresh render
	}

	private void drawPhones(Graphics g) {
		this.numInfected = 0; // reset outside loop
		this.numRepair = 0;

		for (Node c = getHead(); c != null; c = c.next) {
			Phone ph = (Phone) c.data;
			if (ph.hp == 0) {
				if (ph.goRepair) this.repair.isAccessible = true;
				killPhone(c); // can die on way
			}
			else {
				if (ph.goRepair) renderGoRepair(g);
				else if (ph.isInfected) {
					renderInfected(g);
					infectOther(ph);
				}
				else g.setColor(Color.blue); // default colour
				g.fillOval(ph.posX, ph.posY, ph.size, ph.size);
			}
		}
	}
	private void renderGoRepair(Graphics g) { g.setColor(Color.MAGENTA); this.numRepair++; }
	private void renderInfected(Graphics g) { g.setColor(Color.ORANGE); this.numInfected++; }
	

	private void drawUI(Graphics g) {
		g.setColor(Color.black);
		g.drawString("UP to add phone", 10, offSetH(50));
		g.drawString("V to infect phone", 10, offSetH(30));
		g.setColor(Color.blue);
		g.drawString(stat("Phones", this.numPhones), offSetW(100), offSetH(70));
		g.setColor(Color.red);
		g.drawString(stat("Infected", this.numInfected), offSetW(100), offSetH(50));
		g.setColor(Color.black);
		g.drawString(stat("Repairing", this.numRepair), offSetW(100), offSetH(30));
	}
	private String stat(String s, int stat) { return "[" + s + "]: " + stat; }
	private int offSetW(int offset) { return this.boundW - offset; }
	private int offSetH(int offset) { return this.boundH - offset; }

	private void addPhone() {
		phoneList.addHead(new Phone(boundW, boundH, repair));
		((Phone) getHead().data).start();
		this.numPhones++;
	}

	private void killPhone(Node cur) {
		phoneList.remove(cur);
		this.numPhones = phoneList.size - 1;
	}

	private void infectPhone() {
		if (numInfected < phoneList.size) {
			int index = (int) Math.floor(Math.random() * phoneList.size);
			Node c = getHead();
			for (int i = 0; i < index; i++) c = c.next;
			if (!((Phone)c.data).isInfected) ((Phone)c.data).isInfected = true;
		}
	}

	private void infectOther(Phone ph) {
		for (Node c = getHead(); c != null; c = c.next) {
			if (inInfectRange(ph, (Phone)c.data)) ((Phone)c.data).isInfected = true;
		}
	}

	private boolean inInfectRange(Phone o1, Phone o2) {
		double xPow = Math.pow((double) o2.posX - o1.posX, 2);
		double yPow = Math.pow((double) o2.posY - o1.posY, 2);
		return Math.sqrt(xPow + yPow) <= this.transmitRange;
	}	
	
	@Override
	public void keyPressed(KeyEvent key) { // don't need put it anywhere, works as is.
		if (key.getKeyCode() == 38) addPhone(); // up arrow
		if (key.getKeyCode() == 86) infectPhone(); // v key
	}

	@Override
	public void componentResized(ComponentEvent ce) {
		this.boundW = this.getWidth(); // panel.getWidth()
		this.boundH = this.getHeight();
		for(Node c = getHead(); c != null; c = c.next) {
			((Phone) c.data).setBoundary(this.boundW, this.boundH);
		}
	}

	private Node getHead() { return phoneList.getHead(); }

	@Override
	public void keyTyped(KeyEvent ke) {}
	public void keyReleased(KeyEvent ke) {}
	public void componentMoved(ComponentEvent ce) {}
	public void componentShown(ComponentEvent ce) {}
	public void componentHidden(ComponentEvent ce) {}
}
