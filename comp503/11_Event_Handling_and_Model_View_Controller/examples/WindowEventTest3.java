package examples;

import java.awt.event.*;	// Need this for WindowEvent and WindowListener
import javax.swing.*;		// Need this for JFrame

public class WindowEventTest3 extends JFrame {
	public WindowEventTest3 (String name) {
		super(name);

		// Plugin window event handler by creating an anonymous class
		// that extends WindowAdapter.
		this.addWindowListener(new WindowAdapter() 
		{
			public void windowOpened(WindowEvent event) 
			{
				//event handling code goes here.
				System.out.println("Window has been opened");
			}
		});
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(250, 90);
	}
	public static void main(String[] args) {
		JFrame frame = new WindowEventTest3("Anonymous Class Example");
		frame.setVisible(true);
	}
}
