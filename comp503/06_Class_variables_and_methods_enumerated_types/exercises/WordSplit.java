package exercises;

public enum WordSplit {
	FOX, QUICK, LAZY, BROWN, CAT, NONKEYWORD;
	
	private int count = 0;
	
	public void increaseCount() {
		this.setCount(this.getCount() + 1);
	}
	
	public String toString() {
		return this.name() + ": " + getCount();
	}

	public int getCount() {
		return count;
	}

	public void setCount(int count) {
		this.count = count;
	}
}
