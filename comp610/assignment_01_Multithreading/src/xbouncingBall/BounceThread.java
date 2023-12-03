package xbouncingBall;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 *
 * @author coriandar
 */
// DON'T SUBMIT THIS
public class BounceThread {

	public static void main(String[] args) {
		JFrame frame = new BounceThreadFrame();
		frame.show();
	}
}

class BounceThreadFrame extends JFrame {

	private JPanel canvas;

	public BounceThreadFrame() {
		setSize(500, 500);
		setTitle("Bounce");
		Container contentPane = getContentPane();
		canvas = new JPanel();
		contentPane.add(canvas, "Center");
		JPanel p = new JPanel();

		addButton(p, "Start", new ActionListener() {
			public void actionPerformed(ActionEvent evt) {
				Ball b = new Ball(canvas);
				b.start();
				return;
			}
		});

		addButton(p, "Close", new ActionListener() {
			public void actionPerformed(ActionEvent evt) {
				canvas.setVisible(false);
				System.exit(0);
			}
		});

		contentPane.add(p, "South");
	}

	public void addButton(Container c, String title, ActionListener a) {
		JButton b = new JButton(title);
		c.add(b);
		b.addActionListener(a);
	}
}

class Ball extends Thread {
	private JPanel box;
	private static final int XSIZE = 10;
	private static final int YSIZE = 10;
	private int x = genRand(500);
	private int y = genRand(500);
	private int dx = genRand(5);
	private int dy = genRand(5);

	public Ball(JPanel b) {
		box = b;
	}

	public void run() {
		try {
			draw();
			while (true) {
				move();
				sleep(50);
			}
		} catch (Exception e) {}
	}

	public void draw() {
		Graphics g = box.getGraphics();
		g.fillOval(x, y, XSIZE, YSIZE);
		g.dispose();
	}

	public void move() {
		if (!box.isVisible()) return;

		Graphics g = box.getGraphics();
		g.setXORMode(box.getBackground());
		g.fillOval(x, y, XSIZE, YSIZE);

		Dimension d = box.getSize();

		if (x < 0 || x + XSIZE >= d.width) {
			dx = -dx;
		}

		if (y < 0 || y + YSIZE >= d.height) {
			dy = -dy;
		}

		x += dx;
		y += dy;

		g.fillOval(x, y, XSIZE, YSIZE);
		g.dispose();
	}

	private int genRand(int max) { return (int) Math.floor(Math.random() * max); }
}
