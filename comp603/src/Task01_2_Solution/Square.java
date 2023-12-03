package Task01_2_Solution;

public class Square extends Rectangle {

    double side;

    public Square(double sl) {
        super(sl);
        this.side = sl;
    }

    @Override
    public void calculateArea() {
        this.area = this.side * this.side;
    }
}
