package examples;

public class Triangle extends Shape
{

	private double base;
	private double height;
	
	
	public double getBase() 
	{
		return base;
	}

	public void setBase(double base) {
		this.base = base;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}
	
	public Triangle(double base,double height)
	{
		this.setBase(base);
		this.setHeight(height);
	}
	
	@Override
	public double area() 
	{
		return 0.5*base*height;
		
	}

}
