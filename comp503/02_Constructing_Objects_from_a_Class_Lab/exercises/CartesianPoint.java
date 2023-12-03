package exercises;
import java.util.Scanner;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class CartesianPoint {
	float x;
	float y;
	
	// Constructor
	public CartesianPoint(float x, float y) {
		this.x = x;
		this.y = y;
	}
	
	// Main
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		float x = scan.nextFloat();
		float y = scan.nextFloat();
		
		CartesianPoint line = new CartesianPoint(x, y);

		//System.out.println(test.distanceFrom());
	}
	
	// Methods
	public double distanceFrom(CartesianPoint q) {
		double euclideanDistance = 0;
		
		//double xEquation = pow((this.x2 - this.x1), 2);
		//double yEquation = pow((this.y2 - this.y1), 2);
		
		//euclideanDistance = sqrt(xEquation + yEquation);
		
		return euclideanDistance;
	}
}
