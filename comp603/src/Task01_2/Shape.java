package Task01_2;

public abstract class Shape {

	private String shapeName = "";
	private double area = 0;

	public Shape(String name) {
		this.shapeName = name;
	}

	public void printInfo() {
		System.out.println(this.shapeName);
//		System.out.println(this.area);
		// % indicates format specifier, f = floating
		System.out.printf("%.3f\n", this.area);
	}

	public void setName(String newName) {
		this.shapeName = newName;
	}

	public abstract void calculateArea();

	/**
	 * getSetMethods
	 */
	public String getShapeName() {
		return shapeName;
	}

	public void setShapeName(String shapeName) {
		this.shapeName = shapeName;
	}

	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}
}
