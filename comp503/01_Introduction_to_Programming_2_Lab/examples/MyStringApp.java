package examples;

import javax.swing.JOptionPane;

public class MyStringApp {

	public static void main(String[] args) 
	{
		
		String response=""; 
		response = JOptionPane.showInputDialog("What is your response?");
		
		if(response.isEmpty())
		{
			System.out.println("No input was entered by the user");
		}
		else
		{
			System.out.println("The user entered this response: "+response);
		}
	}

}
