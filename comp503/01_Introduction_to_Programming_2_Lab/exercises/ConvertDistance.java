package exercises;
import java.util.Scanner;

public class ConvertDistance {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		final float CONVERION_MULTIPLY = 1.60935f; 
		
		
		System.out.println("Enter the number of miles:");
		float miles = scan.nextFloat();
		
		if(miles >= 0.0f)
		{
			float kilometers = 0.0f;
			kilometers = miles * CONVERION_MULTIPLY;
			
			System.out.print("The number of kms is: ");
			System.out.print(kilometers);			
			//System.out.format("The number of kms is: %f", kilometers);
		}
		else
		{
			System.out.print("Please enter a value greater than 0!");
		}
	}
}