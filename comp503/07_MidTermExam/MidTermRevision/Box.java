package MidTermRevision;

public class Box {
	private int height;
	private int width;
	private int depth;
	
	public static void main(String[] args)
	{
		Box box1 = new Box(10, 10, 10);
		Box box2 = new Box(5, 5, 5);
		Box box3 = new Box(3, 3, 3);
		
		System.out.println("Expected True, Actual:"+box1.fits(box2));
		System.out.println("Expected True, Actual:"+box1.fits(box2, box3));
	}

	/**
	 * Constructor
	 * */
	public Box (int height, int width, int depth) {
		setHeight(height);
		setWidth(width);
		setDepth(depth);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return getHeight()+"(h) x "+getWidth()+"(w) x "+getDepth()+"(d)";
	}
	
	/**
	 * Methods
	 * */
	public boolean fits(Box box2) {
		return this.getHeight() >= box2.getHeight() &&
				this.getWidth() >= box2.getWidth() &&
				this.getDepth() >= box2.getDepth();
	}
	
	public boolean fits(Box box2, Box box3) {
		return this.getHeight() >= box2.getHeight() &&
				this.getWidth() >= box2.getWidth() &&
				this.getDepth() >= box2.getDepth() &&
				box2.fits(box3);
	}
	
	/**
	 * GetSetMethods
	 * */
	public int getHeight() {
		return height;
	}

	public void setHeight(int height) {
		this.height = height;
	}

	public int getWidth() {
		return width;
	}

	public void setWidth(int width) {
		this.width = width;
	}

	public int getDepth() {
		return depth;
	}

	public void setDepth(int depth) {
		this.depth = depth;
	}
}
