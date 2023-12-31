package examples;
import java.util.Scanner;

public class ScannerExample{
	/**
	* This class demonstrates some of the functionality
	* of the Scanner class, in the java.utils package
	*
	* String concatenation and string conversion of numeric data
	* is also shown.
	* */
	public static void main(String[] args){
		//create a new instance of the Scanner class.
		Scanner scanner = new Scanner(System.in );
		//asks the user their name and print a welcome message
		String message;
		System.out .println("What is your name?");
		message = scanner.nextLine();
		System.out .println("Hello "+message+"!");
		//declare an integer and ask the user for their age
		//the output is generated by converting number to a string
		//and using string concatenation +
		int number = 0;
		System.out .println("How old are you?");
		number = scanner.nextInt();
		System.out .println(number+" is really old! But not as old as "
		+(number*2)+"!");
	}
}