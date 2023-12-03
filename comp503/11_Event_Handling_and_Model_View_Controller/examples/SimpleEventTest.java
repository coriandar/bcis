package examples;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

import javax.swing.JButton;
import javax.swing.JFrame;

public class SimpleEventTest extends JFrame implements ActionListener
{

	public SimpleEventTest(String title)
	{
		super(title);
		this.getContentPane().setLayout(null);

		JButton aButton = new JButton("Press this button!");
		aButton.setLocation(20,10);
		aButton.setSize(150,30);
		this.getContentPane().add(aButton);
		
		aButton.addActionListener(this);

		

		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setSize(250,90);
	}


	public static void main(String[] args) 
	{
		JFrame frame = new SimpleEventTest("Hello");
		frame.setVisible(true);
	}
	@Override
	public void actionPerformed(ActionEvent e) 
	{
		
		System.out.println("Event Handling Code: "+e);
		System.out.println("I have been pressed");
	}
}
