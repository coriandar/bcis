package exercises;
import java.util.Scanner;

public class Average {
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the first number");
		int num1 = scanner.nextInt();
		
		System.out.println("Enter the second number");
		int num2 = scanner.nextInt();
		
		System.out.println("Enter the thrid number");
		int num3 = scanner.nextInt();
		
		int sum = num1 + num2+ num3;
		double average = (double) sum / 3;
		
		System.out.println();
		System.out.println("The average of the numbers is: " + average);
	}
}