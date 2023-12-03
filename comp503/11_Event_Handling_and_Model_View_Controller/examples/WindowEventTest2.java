package examples;

import java.awt.event.*;	// Need this for WindowEvent and WindowListener
import javax.swing.*;		// Need this for JFrame

public class WindowEventTest2 extends JFrame 
{
	public WindowEventTest2 (String name) 
	{
		super(name);

		// Plugin window event handler by creating a separate class
		// that extends WindowAdapter so that only one method needs
		// to be written.   This is called an "inner class", which
		// must have default access (e.g., not public nor private)
		class MyWindowHandler extends WindowAdapter 
		{
			@Override
			public void windowOpened(WindowEvent event) {
				System.out.println("Window has been opened");
			}
		}

		this.addWindowListener(new MyWindowHandler());

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(400, 300);
	}
	public static void main(String[] args) {
		JFrame frame = new WindowEventTest2("Inner Class Example");
		frame.setVisible(true);
	}
}
