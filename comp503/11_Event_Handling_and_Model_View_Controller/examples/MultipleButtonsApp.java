package examples;

import java.awt.event.*; // Needed for ActionListener and ActionEvent
import javax.swing.*; // Needed for JFrame and JButton
/**
 * 
 * @author Mark Lanthier
 * @see <a href=
 *      "http://people.scs.carleton.ca/~lanthier/teaching/COMP1406/Notes/Code/Chapter5/">
 *      MultipleButtonsApp</a>
 *
 */
public class MultipleButtonsApp extends JFrame implements ActionListener {
	// This stores all buttons
	JButton[][] buttons;

	public MultipleButtonsApp(String title) {
		super(title);
		getContentPane().setLayout(null);

		buttons = new JButton[4][3];
		String[] buttonLabels = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "*", "0", "#" };
		for (int row = 0; row < 4; row++) {
			for (int col = 0; col < 3; col++) {
				buttons[row][col] = new JButton(buttonLabels[row * 3 + col]);
				buttons[row][col].setLocation(10 + col * 55, 10 + row * 55);
				buttons[row][col].setSize(50, 50);
				buttons[row][col].addActionListener(this);
				getContentPane().add(buttons[row][col]);
			}
		}

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(195, 275);
	}

	// This is the single event handler for all the buttons
	public void actionPerformed(ActionEvent e) {
		System.out.println("Button " + e.getActionCommand() + " was pressed.");
	}

	public static void main(String args[]) {
		MultipleButtonsApp frame = new MultipleButtonsApp("Keypad");
		frame.setVisible(true);
	}
}