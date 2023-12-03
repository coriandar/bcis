package exercises;

public class Cat extends Animal {
	public Cat() {
		System.out.println("Cat object instantiated!\n");
		this.happy = -10;
	}
	
	public String toString() {
		return "Cat has "+super.toString();
	//Will return the toString from Animal Class.
	}
	
	public void feed() {
		this.eat += 1;
		this.happy += 10;
	}
}
