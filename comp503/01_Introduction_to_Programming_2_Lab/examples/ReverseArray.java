package examples;

import javax.swing.JOptionPane;

/**
 * Asks the user how many integers to reverse.
 * Reads the integers and prints them in reverse order
 * 
 * */
/**
 * 
 * Adapted from Dathan, B. & Ramnath S. (2015). 
 * Object-Oriented Analysis and Design. 
 * Universities Press, Springer.
 * 
 * */
public class ReverseArray {

	public static void main(String[] args)
	{
		
		int n = Integer.parseInt(JOptionPane.showInputDialog("How many integers to reverse?"));
		
		if(n > 0)
		{
			int[] a = new int[n];
			
			for(int i=0;i<n;i++)
			{
				a[i] = Integer.parseInt(JOptionPane.showInputDialog
						("Input ["+(i+1)+"/"+n+"]"));
			}
			
			for(int i=n-1;i>=0;i--)
			{
				System.out.println(a[i]);
			}
		}
	}
	
}
