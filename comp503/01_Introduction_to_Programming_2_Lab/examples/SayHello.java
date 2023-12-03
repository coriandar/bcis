package examples;

import java.util.Scanner;

public class SayHello {
	/**
	 * This class demonstrates some of the functionality of the Scanner class, in
	 * the java.utils package
	 */
	public static void main(String[] args) {
		// create a new instance of the Scanner class.
		Scanner scanner = new Scanner(System.in);
		// asks the user their name and print a welcome message
		String message;
		System.out.println("What is your name?");
		message = scanner.nextLine();
		System.out.println("Hello " + message + "!");
	}
}