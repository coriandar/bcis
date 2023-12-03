package mobileVirus;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ComponentEvent;
import java.awt.event.ComponentListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.JPanel;

/**
 * @question 2.1 VirusSimulation
 */
public class Panel extends JPanel implements KeyListener, ComponentListener {

	private int numPhones;
	private int numInfected;
	private int numRepair;
	public int boundW;
	public int boundH;
	private int transmitRange;
	private Phone[] phones;
	private Repair repair;


	public Panel(int boundW, int boundH) {
		this.addKeyListener(this);
		this.addComponentListener(this);
		this.setFocusable(true);

		this.boundW = 1000;
		this.boundH = 1000;
		this.numPhones = 1;
		this.numInfected = 0;
		this.numRepair = 0;
		this.transmitRange = 20;
		this.repair = new Repair(450, 400); // synchronized, monitor
		this.phones = new Phone[1];

		for (int i = 0; i < this.phones.length; i++) {
			this.phones[i] = new Phone(boundW, boundH, this.repair);
			phones[i].start();
		}
	}

	/**
	 * Method: paint
	 * 
	 * Renders final output.
	 */
	public void paint(Graphics g) {
		super.paintComponent(g);
		g.drawString("++[Repair Shop]++", 400, 400);
		drawPhones(g);
		drawUI(g);
		repaint(); // refresh render
	}

	/**
	 * Methods drawPhones
	 * 
	 * Renders phones based on conditions.
	 */
	private void drawPhones(Graphics g) {
		this.numInfected = 0; // reset outside loop
		this.numRepair = 0;

		for (int i = 0; i < phones.length; i++) {
			if (phones[i].hp == 0) {
				if (phones[i].goRepair) this.repair.isAccessible = true;
				killPhone(i); // can die on way
			}
			else {
				if (phones[i].goRepair) renderGoRepair(g);
				else if (phones[i].isInfected) renderInfected(g);
				else g.setColor(Color.blue); // default colour
				g.fillOval(phones[i].posX, phones[i].posY, phones[i].size, phones[i].size);
				infectOther(i);
			}
		}
	}
	private void renderGoRepair(Graphics g) { g.setColor(Color.green); this.numRepair++; }
	private void renderInfected(Graphics g) { g.setColor(Color.red); this.numInfected++; }
	

	/**
	 * Method: drawUI
	 * 
	 * Renders UI.
	 */
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

   /**
	* Method: addPhone
	* 
	* Add new phone
	*/
	private void addPhone() {
		int newLen = this.phones.length + 1;
		Phone[] newPhoneArray = new Phone[newLen];
		for (int i = 0; i < newLen - 1; i++) newPhoneArray[i] = this.phones[i]; // copy ref to new array
		Phone newPhone = new Phone(boundW, boundH, repair); // adds new phone to array
		this.numPhones++;
		newPhoneArray[newLen - 1] = newPhone; // create new phone
		this.phones = newPhoneArray;
		newPhone.start(); // cannot start thread before changing to new array;
	}

	/**
	 * Method: killPhone
	 * 
	 * Replaces dead phone with last index, then shrink array by 1
	 * 
	 * @param removeIndex
	 */
	private void killPhone(int removeIndex) {
		Phone[] newPhones = new Phone[phones.length - 1];
		Phone replaceWithLast = phones[phones.length - 1];
		phones[removeIndex] = phones[phones.length - 1];
		phones[removeIndex] = replaceWithLast;
		for(int i = 0; i < newPhones.length; i++) {newPhones[i] = phones[i];}
		this.numPhones = newPhones.length;
		this.phones = newPhones;
	}

	/**
	 * Method: infect
	 * 
	 * Infect a non-infected phone from random index
	 */
	private void infectPhone() {
		if (numInfected < this.phones.length) {
			int index = (int) Math.floor(Math.random() * phones.length);
			if (!phones[index].isInfected) phones[index].isInfected = true;
		}
	}

	/**
	 * Method: infectOther
	 * @param index of obj to be infected
	 */
	private void infectOther(int i) {
		if (phones[i].isInfected) {
			for (int j = 0; j < phones.length; j++) {
				if(inInfectRange(phones[i], phones[j])) phones[j].isInfected = true;
			}
		}
	}

	private void updatePhoneBounds() {
		for (int i = 0; i < this.phones.length; i++) {
			phones[i].setBoundary(this.boundW, this.boundH);
		}
	}

	/**
	 * Method: inInfectRange
	 * @param o1 currently infected object
	 * @param o2 object to infect
	 * @return if o2 is in range to be infected, distance circle formula
	 */
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
		this.updatePhoneBounds();
	}

	@Override
	public void keyTyped(KeyEvent ke) {}
	public void keyReleased(KeyEvent ke) {}
	public void componentMoved(ComponentEvent ce) {}
	public void componentShown(ComponentEvent ce) {}
	public void componentHidden(ComponentEvent ce) {}
}
