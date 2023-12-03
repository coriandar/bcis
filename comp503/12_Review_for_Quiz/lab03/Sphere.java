package lab03;

public class Sphere {
	private double diameter;
	
	public static void main(String[] args)
	{
		Sphere s1 = new Sphere(100);
		System.out.println(s1.radius());
		System.out.println(s1.volume());
		System.out.println(s1.surfaceArea());
	}
	
	public Sphere(double diameter) {
		setDiameter(diameter);
	}
	
	public String toString() {
		return "Sphere: " + this.getDiameter() + "\n";
	}

	public double radius() {
		return this.getDiameter() / 2.0;
	}
	
	public double volume() {
		return (4.0 / 3.0) * Math.PI * Math.pow(this.radius(), 3);
	}
	
	public double surfaceArea() {
		return 4.0 * Math.PI * Math.pow(this.radius(), 2);
	}
	
	public double getDiameter() {
		return diameter;
	}

	public void setDiameter(double diameter) {
		this.diameter = diameter;
	}
}
