package Task01_2_Solution;

public class Rectangle extends Shape {

    double length, width;

    public Rectangle(double lenth, double width) {
        super("Rectangle");
        this.length = lenth;
        this.width = width;
    }

    public Rectangle(double sidelen) {
        super("Squre");
        length = sidelen;
        width = sidelen;
    }

    @Override
    public void calculateArea() {
        this.area = length * width;
    }
}
