package exercises;

public class Dog {
	private String name;
	private int age;
	
	public Dog(String name, int age) {
		this.setName(name);
		this.setAge(age);
	}
	
	public void setName (String name) {
		this.name = name;
	}
	
	public void setAge (int age) {
		this.age = age;
	}
	
	public String getName () {
		return this.name;
	}
	
	public int getAge () {
		return this.age;
	}
	
	public int inPersonYears() {
		return this.age * 7;
	}
	
	//TA: use string builder, more efficient.
	public String toString() {
		StringBuilder sentence = new StringBuilder();
		sentence.append("Dog's name: ");
		sentence.append(name);
		sentence.append(" Age: ");
		sentence.append(age);
		sentence.append(" Person years: ");
		sentence.append(inPersonYears());

		return sentence.toString();
	}
}
