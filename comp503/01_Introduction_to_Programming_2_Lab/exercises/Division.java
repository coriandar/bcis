package exercises;
import java.util.Scanner;

public class Division {

	public static void main(String[] args)
	{
		/*
		 * Class - name
		 * object created by the new operator (constructor))
		 * */
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Please enter the numerator");
		int numerator = scanner.nextInt();
		
		System.out.println("Please enter the denominator");
		int denominator = scanner.nextInt();
		
		System.out.print("The input fraction is: ");
		System.out.print(numerator + "/" + denominator);
		System.out.print("\n");
		
		
		if(denominator == 0)
		{
			System.out.println("This quantity is undefined");
		}
		else
		{
			float divisionResult = (float) numerator / (float) denominator;
			System.out.println("The decimal equivalence is: " + divisionResult);
		}
	}
}