package exercises;
import java.util.Scanner;

public class HelloWorld {
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("What is the message?");		
		String message = scanner.nextLine();
		
		System.out.print("\n");
		System.out.println("The message is \"" + message + "\".");
	}
}