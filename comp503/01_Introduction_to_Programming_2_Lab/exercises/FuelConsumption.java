package exercises;
import java.util.Scanner;

public class FuelConsumption {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the number of miles:");
		double milesTravelled = scan.nextDouble();
		
		System.out.println("Enter the gallons of fuel used:");
		double gallonsFuel = scan.nextDouble();
		
		double milesPerGallon = 0.0f;
		milesPerGallon = milesTravelled / gallonsFuel;
		
		System.out.print("Miles Per Gallon: ");
		System.out.print(milesPerGallon);
	}
}