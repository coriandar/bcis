package exercises;
import java.util.Scanner;

public class FahrenheitToCelcius {

	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		final float CONVERSION_MULTIPLIER = 5.0f / 9.0f;
			
		System.out.println("Please enter the temperature in Fahrenheit:");
		int tempFahrenheit = scanner.nextInt();
			
		// (32F -32) X 5/9 = 0C
		int tempCelcius = 0;
		tempCelcius = (tempFahrenheit - 32);
		//System.out.print(tempCelcius);
		//System.out.print(CONVERSION_MULTIPLIER);
		tempCelcius = (int) (tempCelcius * CONVERSION_MULTIPLIER);
					
		System.out.print("The temperature ");
		System.out.print(tempFahrenheit + "F is " );
		System.out.print(tempCelcius + "C");
	}
}