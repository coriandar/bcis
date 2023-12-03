package examples;
/**
 * 
 * 
 * Counts the number of vowels in an input string
 * 
 * 
 * Adapted from Dathan, B. & Ramnath S. (2015). 
 * Object-Oriented Analysis and Design. 
 * Universities Press, Springer.
 * 
 * */
import javax.swing.JOptionPane;

public class CountingVowels {

	public static void main(String[] args) 
	{
		String vowels = "aeiou";
		int vowelCount = 0;
		String text = JOptionPane.showInputDialog("Please Enter a String");
		
		for(int i = 0;i<text.length();i++)
		{
			char ch = text.charAt(i);
			if(vowels.indexOf(ch) != -1)
			{
				vowelCount++;
			}
			
		}
		
		System.out.println("The number of vowels in the text: "+text+" is "+vowelCount);
		
	}

}
