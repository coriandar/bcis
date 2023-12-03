package MidTermRevision;

public class CartesianPoint {
	private double x;
	private double y;
	
	public static void main(String[] args)
	{
		CartesianPoint test = new CartesianPoint(10,10);
		System.out.println(test.distanceFrom(new CartesianPoint()));
	}
	
	/**
	 * Constructor
	 * */
	public CartesianPoint() {
		setX(0);
		setY(0);
	}
	
	public CartesianPoint(double x, double y) {
		setX(x);
		setY(y);
	}
	
	/**
	 * Methods
	 * */
	public double distanceFrom(CartesianPoint q) {
		double xEquation = Math.pow(this.getX() - q.getX(), 2);
		double yEquation = Math.pow(this.getY() - q.getY(), 2);
		return Math.sqrt(xEquation + yEquation);
	}
	
	public boolean onXAxis() {
		return this.getX() == 0;
	}
	
	public boolean onYAxis() {
		return this.getY() == 0;
	}
	
	
	/**
	 * GetSetMethods
	 * */
	public double getX() {
		return this.x;
	}
	
	public void setX(double x) {
		this.x = x;
	}
	
	public double getY() {
		return this.y;
	}
	
	public void setY(double y) {
		this.y = y;
	}
}
