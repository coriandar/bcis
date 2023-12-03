package examples;

import java.awt.event.*; // Needed for ActionListener and ActionEvent
import javax.swing.*; // Needed for JFrame, JButton and JTextField
/**
 * 
 * @author Mark Lanthier
 * @see <a href=
 *      "http://people.scs.carleton.ca/~lanthier/teaching/COMP1406/Notes/Code/Chapter5/">
 *      CalculatorApp</a>
 *
 */
public class CalculatorApp extends JFrame {
	// Text fields to hold the user data and the computed data
	JTextField valueField, squareField, rootField;

	public CalculatorApp(String title) {
		super(title);
		getContentPane().setLayout(null);

		// Add the value label and text field
		JLabel label = new JLabel("Value:");
		label.setLocation(10, 10);
		label.setSize(100, 30);
		getContentPane().add(label);

		valueField = new JTextField();
		valueField.setLocation(100, 10);
		valueField.setSize(150, 30);
		getContentPane().add(valueField);

		// Add the compute button
		JButton computeButton = new JButton("Compute");
		computeButton.setLocation(10, 50);
		computeButton.setSize(240, 30);
		getContentPane().add(computeButton);

		// Add the square label and text field
		label = new JLabel("Square:");
		label.setLocation(10, 100);
		label.setSize(100, 30);
		getContentPane().add(label);

		squareField = new JTextField();
		squareField.setLocation(100, 100);
		squareField.setSize(150, 30);
		squareField.setEditable(false);
		getContentPane().add(squareField);

		// Add the square root label and text field
		label = new JLabel("Square Root:");
		label.setLocation(10, 150);
		label.setSize(100, 30);
		getContentPane().add(label);

		rootField = new JTextField();
		rootField.setLocation(100, 150);
		rootField.setSize(150, 30);
		rootField.setEditable(false);
		getContentPane().add(rootField);

		// Handle the button click
		computeButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if (valueField.getText().length() > 0) {
					float value = Float.parseFloat(valueField.getText());
					squareField.setText("" + value * value);
					rootField.setText("" + Math.sqrt(value));
				}
			}
		});

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(275, 230);
	}

	public static void main(String args[]) {
		CalculatorApp frame = new CalculatorApp("Simple Calculator");
		frame.setVisible(true);
	}
}