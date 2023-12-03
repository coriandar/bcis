package Task01_2_Solution;

public class ShapeCalculator1 {

    public static void main(String[] args) {

        Shape cirObj = new Circle(2.5);
        Shape recObj = new Rectangle(12, 16.5);

        cirObj.calculateArea();
        cirObj.printInfo();

        recObj.calculateArea();
        recObj.printInfo();

        Shape squObj = new Square(3.3);
        squObj.calculateArea();
        squObj.printInfo();

    }
}
