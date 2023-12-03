package examples;

public class Person {
	String name;
	int age;
	boolean student;
	char gender;

	public Person() 
	{
		this("anon",0,false,'?');
	}

	public Person(String name, int age, boolean student, char gender) {
		this.name = name;
		this.age = age;
		this.student = student;
		this.gender = gender;
	}

	void makeAnonymous() 
	{
		this.name = "anon";
	}
	

	Person oldest(Person aPerson) 
	{

		if (this.age > aPerson.age) 
		{
			return this;
		} 

		return aPerson;

	}

	int computeDiscount() {

		if ((this.student) && (this.age >= 10) && (this.age <= 20)) 
		{
			return 50;
		} 

		return 0;
	}

}