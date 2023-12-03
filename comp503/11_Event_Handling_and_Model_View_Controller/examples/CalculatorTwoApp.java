package examples;

import java.awt.event.*; // Needed for ActionListener and ActionEvent
import javax.swing.*; // Needed for JFrame, JRadioButton and JTextField
/**
 * 
 * @author Mark Lanthier
 * @see <a href=
 *      "http://people.scs.carleton.ca/~lanthier/teaching/COMP1406/Notes/Code/Chapter5/">
 *      CalculatorTwoApp</a>
 *
 */
public class CalculatorTwoApp extends JFrame implements ActionListener {
	JTextField valueField, answerField;
	JRadioButton[] buttons;

	public CalculatorTwoApp(String title) {
		super(title);

		getContentPane().setLayout(null);

		// Add the value label and text field
		JLabel label = new JLabel("Input X:");
		label.setLocation(10, 10);
		label.setSize(100, 30);
		getContentPane().add(label);

		valueField = new JTextField();
		valueField.setLocation(80, 10);
		valueField.setSize(140, 30);
		getContentPane().add(valueField);

		// Add the "operation type" radio buttons to the window
		// and to a ButtonGroup so that one is on at a time
		label = new JLabel("Operation:");
		label.setLocation(10, 55);
		label.setSize(100, 30);
		getContentPane().add(label);

		ButtonGroup operations = new ButtonGroup();
		buttons = new JRadioButton[4];
		String[] buttonLabels = { "X + X", "X * X", "X ^ 0.5", "1 / X" };
		for (int i = 0; i < 4; i++) {
			buttons[i] = new JRadioButton(buttonLabels[i], false);
			buttons[i].setLocation(80, 60 + i * 20);
			buttons[i].setSize(150, 20);
			getContentPane().add(buttons[i]);
			operations.add(buttons[i]);
			buttons[i].addActionListener(this);
		}

		// Add the answer label and text field
		label = new JLabel("Answer:");
		label.setLocation(10, 150);
		label.setSize(100, 30);
		getContentPane().add(label);

		answerField = new JTextField();
		answerField.setLocation(80, 150);
		answerField.setSize(140, 30);
		answerField.setEditable(false);
		getContentPane().add(answerField);

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(255, 230);
	}

	// Handle a radio button click
	public void actionPerformed(ActionEvent e) {
		int value = Integer.parseInt(valueField.getText());

		// Find the number of the button that was clicked
		int buttonNumber = 0;
		for (buttonNumber = 0; buttonNumber < 4; buttonNumber++) {
			if (buttons[buttonNumber] == e.getSource())
				break;
		}

		// Perform the calculation
		double result = 0;
		switch (buttonNumber) {
		case 0:
			result = value + value;
			break;
		case 1:
			result = value * value;
			break;
		case 2:
			result = Math.sqrt(value);
			break;
		case 3:
			result = 1 / (double) value;
			break;
		}

		// Show the answer
		answerField.setText("" + result);
	}

	public static void main(String args[]) {
		CalculatorTwoApp frame = new CalculatorTwoApp("Calculator Two");
		frame.setVisible(true);
	}
}