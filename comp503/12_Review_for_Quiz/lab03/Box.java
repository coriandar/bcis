package lab03;

public class Box {
	private int height;
	private int width;
	private int depth;
	
	public static void main(String[] args)
	{
		Box box1 = new Box(20, 20, 20);
		Box box2 = new Box(10, 10, 10);
		Box box3 = new Box();
		System.out.println(box1.fits(box2));
		System.out.println(box1.fits(box2, box3));
	}

	public Box() {
		this(0,0,0);
	}
	
	public Box(int height, int width, int depth) {
		setHeight(height);
		setWidth(width);
		setDepth(depth);
	}
	
	public String toString() {
		return getHeight() +" : "+ getWidth() +" : "+ getDepth();
	}
	
	public boolean fits(Box box) {
		return this.getHeight() > box.getHeight() 
				&& this.getWidth() > box.getWidth()
				&& this.getDepth() > box.getDepth();
	}
	
	public boolean fits(Box box1, Box box2) {
		return this.fits(box1) && box1.fits(box2);
	}
	
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
