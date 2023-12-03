package examples;

public class Rectangle extends Shape{

	
	private int width;
	private int height;
	
	@Override
	public double area() 
	{
		
		return this.width*this.height;
	}
	
	
	public int getWidth() {
		return width;
	}

	public void setWidth(int width) {
		this.width = width;
	}

	public int getHeight() {
		return height;
	}

	public void setHeight(int height) {
		this.height = height;
	}

	public Rectangle(int width, int height) 
	{
		this.width = width;
		this.height = height;
	}

	
	
}
