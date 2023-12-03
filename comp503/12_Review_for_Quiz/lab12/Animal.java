package lab12;

public abstract class Animal {
	private double weight;
	
	public abstract void soundsLike();
	
	public Animal() {
		setWeight(1.0);
	}
	
	public double getWeight() {
		return weight;
	}
	
	public void setWeight(double weight) {
		this.weight = weight;
	}
}
