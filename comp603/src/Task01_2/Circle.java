package Task01_2;

public class Circle extends Shape {

	private double radius;

	public Circle(double radius) {
		super("Circle");
		this.radius = radius;
	}

	@Override
	public void calculateArea() {
		super.setArea(Math.PI * Math.pow(getRadius(), 2));
	}

	/**
	 * getSetMethods
	 */
	public double getRadius() {
		return radius;
	}

	public void setRadius(double radius) {
		this.radius = radius;
	}
}
