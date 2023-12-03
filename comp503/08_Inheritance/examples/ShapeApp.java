package examples;

public class ShapeApp {


	public static void main(String[] args) 
	{
		Shape[] shapes = new Shape[4];
		shapes[0] = new Rectangle(10,20);
		shapes[1] = new Rectangle(20,30);
		shapes[2] = new Triangle(1.2,3.5);
		shapes[3] = new Circle(5.56);
	
		for(Shape aShape : shapes)
		{
			System.out.println(aShape.area());			
		}
	}
}