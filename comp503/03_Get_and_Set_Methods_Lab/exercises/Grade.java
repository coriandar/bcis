package exercises;

//encapsulation
public class Grade {
	private int percentage;
	
	//constructor
	public Grade(int percentage) {
		this.setPercentage(percentage);
	}
	
	public void setPercentage(int percentage) {
		this.percentage = percentage;
	}
	
	public int getPercentage() {
		return this.percentage;
	}
}
