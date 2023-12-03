package MidTermExam;

public class Person {
	private String firstName;
	private String lastName;
	private int age;
	
	public static void main(String[] args)
	{
		Person person1 = new Person("Bob", "Belcher", 45);
		Person person2 = new Person("Linda", "Belcher", 44);
		Person person3 = new Person("Teddy", "Burger", 45);
		Person person4 = new Person("Mr.", "Fishodour", 60);
		
		System.out.println("Oldest: "+person1.oldest(person2));
		System.out.println("Oldest: "+person1.oldest(person3));
		System.out.println("Oldest: "+person1.oldest(person4));
	}
	
	/**
	 * Constructor
	 * */
	public Person(String firstName, String LastName, int age) {
		setFirstName(firstName);
		setLastName(LastName);
		setAge(age);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "Name: "+getFirstName()+" "+ getLastName()+" Age:"+getAge();
	}
	
	/**
	 * Methods
	 * */
	public Person oldest(Person b) {
		Person temp = new Person(this.firstName, this.lastName, this.age);
		
		if(temp.getAge() < b.getAge()) {
			temp = b;
		}
		
		return temp;
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getFirstName() {
		return firstName;
	}
	
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	
	public String getLastName() {
		return lastName;
	}
	
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
}
