package Task01_2_Solution;

import java.text.DecimalFormat;

public abstract class Shape {

    public String shapeName = "";
    public double area = 0;

    public Shape(String name) {
        this.shapeName = name;
    }

    public void printInfo() {
        System.out.println(this.shapeName);

        //Formatting a Decimal Number
        DecimalFormat df = new DecimalFormat("###.000");
        System.out.println(df.format(this.area));
//        System.out.println(this.area);
    }

    public void setName(String newName) {
        this.shapeName = newName;
    }

    //please be noted that this is an abstract function
    public abstract void calculateArea();

}
