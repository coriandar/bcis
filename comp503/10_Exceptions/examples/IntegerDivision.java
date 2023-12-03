package examples;

import java.util.InputMismatchException;
import java.util.Scanner;

public class IntegerDivision{

	public static void main(String[] args)
	{		
		Scanner scan = new Scanner(System.in);
		try
		{
			System.out.println("Enter a value for numerator: ");
			int numerator = scan.nextInt();

			System.out.println("Enter a value for denominator: ");
			int denominator = scan.nextInt();

			int result = numerator/denominator;
			System.out.println("The quotient "+numerator+" and "+denominator+" is: "+result);
			
		}

		catch(InputMismatchException inputMismatchException)
		{
			System.out.println("You must input integer values");
			System.err.println("Exceptional event: "+inputMismatchException);
			scan.next();//remove bad input from the scanner.				
		}

		catch(ArithmeticException arithmeticException)
		{
			System.out.println("There was an arithmetic error: ");
			System.err.println("Exceptional event: "+arithmeticException);				
		}
	}
}
