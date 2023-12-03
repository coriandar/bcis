package Task01_2_Solution;

import java.util.Scanner;

public class ShapeCalculator2 {

    public static void main(String[] args) {

        System.out.println("Please Select: \n (1) Rectangle \n (2) Circle \n (3) Square");
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

        try {
            int option = Integer.parseInt(s.trim());
            switch (option) {
                case 1:
                    System.out.print("Input length: ");
                    s = scan.nextLine();
                    double len = Double.parseDouble(s);
                    System.out.print("Input width: ");
                    s = scan.nextLine();
                    double wid = Double.parseDouble(s);
                    Rectangle aRec = new Rectangle(len, wid);
                    aRec.calculateArea();
                    aRec.printInfo();
                    break;
                case 2:
                    System.out.print("Input radius: ");
                    s = scan.nextLine();
                    double rad = Double.parseDouble(s);
                    Circle aCir = new Circle(rad);
                    aCir.calculateArea();
                    aCir.printInfo();
                    break;
                case 3:
                    System.out.print("Input side length: ");
                    s = scan.nextLine();
                    double slen = Double.parseDouble(s);
                    Square aSqu = new Square(slen);
                    aSqu.calculateArea();
                    aSqu.setName("Square");
                    aSqu.printInfo();
                    break;
                default:
                    System.out.println("Wrong input.");
                    break;
            }
            System.out.println("Thank you!");

        } catch (NumberFormatException e) {
            System.out.println("Invalid input. Not an integer");
        }
    }
}
