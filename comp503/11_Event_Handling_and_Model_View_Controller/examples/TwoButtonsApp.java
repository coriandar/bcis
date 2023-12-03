package examples;
import java.awt.event.*;	// Needed for ActionListener and ActionEvent
import javax.swing.*;		// Needed for JFrame and JButton
/**
 * 
 * @author Mark Lanthier
 * @see <a href=
 *      "http://people.scs.carleton.ca/~lanthier/teaching/COMP1406/Notes/Code/Chapter5/">
 *      TwoButtonsApp</a>
 *
 */
public class TwoButtonsApp extends JFrame {
	public TwoButtonsApp(String title) {
		super(title);
		getContentPane().setLayout(null);

		JButton button1 = new JButton("Press Me");
		button1.setLocation(20,10);  
		button1.setSize(150, 30);
		getContentPane().add(button1);

		JButton button2 = new JButton("Don't Press Me");
		button2.setLocation(190,10);  
		button2.setSize(150, 30);
		getContentPane().add(button2);

		// Add the first button's event handler
		button1.addActionListener(new ActionListener() 
		{
			public void actionPerformed(ActionEvent e) 
			{
				System.out.println("That felt good!");
			}
		});

		// Add the second button's event handler
		button2.addActionListener(new ActionListener() 
		{
			public void actionPerformed(ActionEvent e) 
			{
				System.out.println("Ouch! Stop that!");
			}
		});

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(370,90);
	}

	public static void main(String args[]) 
	{
		TwoButtonsApp frame =  new TwoButtonsApp("Two Buttons");
		frame.setVisible(true);
	}
}