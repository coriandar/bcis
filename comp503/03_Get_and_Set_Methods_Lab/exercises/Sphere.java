package exercises;
//import static java.lang.Math.pow;
// use this to import Math functions, include PI
import java.lang.Math;

public class Sphere {
	private double diameter;
	//use Math instead
	//static final double PI = 3.14159265359;
	
	public Sphere (double diameter) {
		this.setDiameter(diameter);
	}

	public double getDiameter() {
		return diameter;
	}

	public void setDiameter(double diameter) {
		this.diameter = diameter;
	}
	
	public double radius() {
		return this.getDiameter() / 2;
	}
	
	public double volume() {
		return (4.0 / 3.0) * Math.PI * Math.pow(this.radius(), 3);
	}
	
	public double surfaceArea() {
		return 4.0 * Math.PI * Math.pow(this.radius(), 2);
	}
	
	public String toString() {
		StringBuilder sphereSpec = new StringBuilder();
		sphereSpec.append("Dia: ");
		sphereSpec.append(this.getDiameter());
		
		sphereSpec.append(" Vol: ");
		sphereSpec.append(this.volume());
 		
		sphereSpec.append(" SurfaceArea: ");
		sphereSpec.append(this.surfaceArea());
		
		return sphereSpec.toString();
	}
	
}
