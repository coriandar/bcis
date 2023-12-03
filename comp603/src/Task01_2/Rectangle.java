package Task01_2;

public class Rectangle extends Shape {

	private double width;
	private double height;

	public Rectangle(double width, double height) {
		super("Rectangle");
		this.width = width;
		this.height = height;
	}

	@Override
	public void calculateArea() {
		super.setArea(getWidth() * getHeight());
	}

	/**
	 * getSetMethods
	 */
	public double getWidth() {
		return width;
	}

	public void setWidth(double width) {
		this.width = width;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}
}
