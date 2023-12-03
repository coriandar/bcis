package MidTermExamRefactor;

public class Person {
	private String firstName;
	private String lastName;
	private int age;
	
	public static void main(String[] args)
	{
		Person person1= new Person("Bob", "Belcher", 40);
		Person person2= new Person("Linda", "Belcher", 39);
		Person person3= new Person("Teddy", "Burger", 40);
		Person person4= new Person("Calvin", "Fischoeder", 60);
		
		System.out.println(person1.oldest(person2));
		System.out.println(person1.oldest(person3));
		System.out.println(person1.oldest(person4));
	}

	/**
	 * Constructor
	 * */
	public Person(String first, String last, int age) {
		setFirstName(first);
		setLastName(last);
		setAge(age);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "Name:"+getFirstName()+" "+getLastName()+" Age:"+getAge();
	}
	
	/**
	 * Method
	 * */
	public Person oldest(Person b) {
		if(this.getAge() < b.getAge()) {
			return b;
		}
		else {
			return this;
		}
	}
	
	/**
	 * GetSet
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