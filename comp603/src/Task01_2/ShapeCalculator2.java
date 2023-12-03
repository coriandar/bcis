package Task01_2;

import java.util.Scanner;

public class ShapeCalculator2 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		do {
			printMenu();
			int input = 0;

			try {
				input = Integer.parseInt(scan.nextLine());
				if (input < 1 || input > 3) {
					System.out.println("Wrong Input");
					break;
				}
			} catch (NumberFormatException e) {
				System.out.println("Invalid input. Not an integer");
				break;
			}

			actions(input, scan);

		} while (true);
		scan.close();
	}

	public static void actions(int input, Scanner scan) {
		if (input == 1) {
			// 1) input width and length, printInfo()
			System.out.println("Width:");
			double width = Double.parseDouble(scan.nextLine());
			System.out.println("Length");
			double length = Double.parseDouble(scan.nextLine());
			Rectangle recObj = new Rectangle(width, length);
			recObj.calculateArea();
			recObj.printInfo();

		} else if (input == 2) {
			// 2) input radius, printInfo()
			System.out.println("Radius:");
			double radius = Double.parseDouble(scan.nextLine());
			Circle cirObj = new Circle(radius);
			cirObj.calculateArea();
			cirObj.printInfo();

		} else if (input == 3) {
			// 3) input side, printInfo()
			System.out.println("Side:");
			double side = Double.parseDouble(scan.nextLine());
			Square squObj = new Square(side);
			squObj.calculateArea();
			squObj.printInfo();
		}
	}

	public static void printMenu() {
		System.out.println("Please Select:");
		System.out.println("(1) Rectangle");
		System.out.println("(2) Circle");
		System.out.println("(3) Square");
	}
}
