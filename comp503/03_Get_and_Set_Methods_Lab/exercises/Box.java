package exercises;

public class Box {
	private int height;
	private int width;
	private int depth;
	
	public Box (int height, int width, int depth) {
		this.setHeight(height);
		this.setWidth(height);
		this.setDepth(height);
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
	
	public String toString() {
		StringBuilder boxDescription = new StringBuilder();
		boxDescription.append("Height: ");
		boxDescription.append(height);
		boxDescription.append("Width: ");
		boxDescription.append(width);
		boxDescription.append("Depth: ");
		boxDescription.append(depth);
		
		return boxDescription.toString();
	}
	
	public boolean fits(Box box) {
		// can us getX or dot operator
		return this.width > box.getWidth() &&
				this.height > box.height &&
				this.depth > box.depth;
	}
	
	public boolean fits(Box box1, Box box2) {
		return this.fits(box1) && box1.fits(box2);
	}
}
