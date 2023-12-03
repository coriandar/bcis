package examples;

import javax.swing.JOptionPane;

public class UserInput {

	public static void main(String[] args) 
	{
		String response="";		
		response = JOptionPane.showInputDialog("Enter an integer"); 		
		int num = Integer.parseInt(response);
		System.out.println(num);
		
		if(num > 10)
		{
			System.out.println("This number is greater than 10");
		}
		else
		{
			System.out.println("This number is less than or equal to 10");
		}
		
		if(num > 10 && num < 20)
		{
			System.out.println("This number is between 10 and 20 (exclusive)");
		}
		if(num == 0 || num == 1)
		{
			System.out.println("This number is either 0 or 1");
		}
		
		if (!(num == 0))
		{
			System.out.println("This number is non-zero");
		}
		
		num = (num >= 0)?num*2:num+2;
		
		System.out.println(num);
		
	}

}
