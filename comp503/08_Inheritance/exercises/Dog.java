package exercises;

public class Dog extends Animal {
	public void feed() {
		this.eat += 5;
		this.happy += 1;
	}
	
	public Dog() {
		System.out.println("Dog object instantiated!\n");
	}
	
	public String toString() {
		return "Dog has "+super.toString();
	}
}
