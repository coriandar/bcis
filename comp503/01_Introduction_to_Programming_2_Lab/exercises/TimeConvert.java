package exercises;
import java.util.Scanner;

public class TimeConvert {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the number of seconds:");
		int inputSeconds = scan.nextInt();
		
		System.out.println();
		System.out.print(inputSeconds);
		System.out.println(" seconds is equivalent to");
		
		int hours = inputSeconds / 3600;
		int minutes = (inputSeconds % 3600) / 60;
		int seconds = inputSeconds % 60;
		
		System.out.println(hours + " hours");
		System.out.println(minutes + " minutes");
		System.out.println(seconds + " seconds");
	}
}