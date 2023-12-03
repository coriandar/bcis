package lab02;

public class CartesianPoint {
	private double x;
	private double y;
	
	public static void main(String[] args)
	{
		CartesianPoint test = new CartesianPoint(1.0, 10.0);
		CartesianPoint q = new CartesianPoint();
		System.out.println(test.distanceFrom(q));
		System.out.println(test.onXAxis());
		System.out.println(test.onYAxis());	
	}

	public CartesianPoint() {
		this(0.0, 0.0);
	}
	
	public CartesianPoint(double x, double y) {
		this.x = x;
		this.y = y;
	}
	
	public double distanceFrom(CartesianPoint q) {
		double xEquation = Math.pow((q.x - this.x), 2);
		double yEquation = Math.pow((q.y - this.y), 2);
		return Math.sqrt(xEquation + yEquation);
	}
	
	public boolean onXAxis() {
		return this.x == 0;
	}
	
	public boolean onYAxis() {
		return this.y == 0;
	}
}
