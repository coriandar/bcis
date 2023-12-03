package exercises;

import java.util.InputMismatchException;
import java.util.Scanner;

public class ComputeProductMenu {
	private static Scanner scanner;

	public static void product() throws InputMismatchException {
		System.out.println("Welcome to the calculator");
		System.out.println("Enter the first number:");
		int value1 = scanner.nextInt();
		System.out.println("Enter the second number:");
		int value2 = scanner.nextInt();
		System.out.println("Product is: " + (value1 * value2));
	}

	public static void main(String[] args) {
		scanner = new Scanner(System.in);
		System.out.println("Welcome to the calculator.");

		do {
			try {
				System.out.println("1. Compute product");
				System.out.println("2. Quit");
				int option = scanner.nextInt();

				if (option == 1) {
					product();
				}

				if (option == 2) {
					break;
				}
			}
			catch (InputMismatchException inputMistmatchException) {
				System.out.println("Must input integer values only.");
				scanner.next();
			}
		} while (true);
		
		System.out.println("Goodbye!");
	}
}
