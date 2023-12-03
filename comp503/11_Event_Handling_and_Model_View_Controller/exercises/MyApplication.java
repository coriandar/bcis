package exercises;

import java.awt.Color;
import java.awt.Font;
import javax.swing.*;

public class MyApplication extends JFrame {
	public MyApplication() {
		getContentPane().setLayout(null);
		
		JButton button1 = new JButton("button1");
		button1.setFont(new Font("Times", Font.BOLD, 18));
		button1.setForeground(new Color(255,0,0));
		button1.setBackground(new Color(0,0,0));
		button1.setLocation(100,10);
		button1.setSize(150,30);
		getContentPane().add(button1);
		
		JButton button2 = new JButton("button2");
		button2.setFont(new Font("Arial", Font.BOLD, 18));
		button2.setForeground(new Color(255,255,0));
		button2.setBackground(new Color(0,0,0));
		button2.setLocation(100,50);
		button2.setSize(150,30);
		getContentPane().add(button2);
		
		JButton button3 = new JButton("button3");
		button3.setFont(new Font("Sans Serif", Font.BOLD, 18));
		button3.setForeground(new Color(255,255,255));
		button3.setBackground(new Color(0,0,0));
		button3.setLocation(100,90);
		button3.setSize(150,30);
		getContentPane().add(button3);
		
		JButton button4 = new JButton("button4");
		button4.setFont(new Font("Courier", Font.BOLD, 14));
		button4.setForeground(new Color(0,255,255));
		button4.setBackground(new Color(0,0,0));
		button4.setLocation(100,130);
		button4.setSize(150,30);
		getContentPane().add(button4);
		
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(350,250);
	}
	
	public static void main(String args[]) 
	{
		MyApplication test =  new MyApplication();
		test.setVisible(true);
	}
}
