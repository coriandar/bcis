package exercises;
import java.util.Scanner;

public class TimeDuration {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the number of hours");
		int inputHours = scan.nextInt();
		
		System.out.println("Enter the number of minutes");
		int inputMinutes = scan.nextInt();
		
		System.out.println("Enter the number of seconds");
		int inputSeconds = scan.nextInt();
		
		int hoursToSeconds = inputHours * 3600;
		int minutesToSeconds = inputMinutes * 60;
		
		int totalSeconds = 0;
		totalSeconds += hoursToSeconds;
		totalSeconds += minutesToSeconds;
		totalSeconds += inputSeconds;
		
		System.out.print("\n");
		System.out.print("The total number of seconds is ");
		System.out.print(totalSeconds + ".");
	}
}