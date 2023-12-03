package exercises;
import java.util.Scanner;

public class ShapeApp {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		do {
			System.out.println("1 Create a Circle Object");
			System.out.println("2 Create a Rectangle Object");
			System.out.println("3 Stop");
			int input = scan.nextInt();
			
			Shape[] shapes = new Shape[1];
			if(input == 3) {
				break;
			}
			else if(input == 1) {
				shapes[0] = new Circle(10);
				System.out.print("The area of the circle is: ");
			}
			else if(input == 2) {
				shapes[0] = new Rectangle(10,10);
				System.out.print("The area of the circle is: ");
			}
			
			System.out.println(shapes[0].computeArea()+"\n");
		} while(true);
		System.out.println("Exited application.");
	}
}
