package examples;

public class Person {
	private String name;
	private int age;
	private boolean student;
	private char gender;

	public Person() 
	{
		this("anon",0,false,'U');
	}
	
	public Person(String name)
	{
		this(name,0,false,'U');
	}
	
	public Person(String name, int age)
	{
		this(name,age,false,'U');
	}
	
	public Person(String name, int age, boolean student, char gender) {
		this.setName(name);
		this.setAge(age);
		this.setStudent(student);
		this.setGender(gender);
	}

	public int getAge()
	{
		return this.age;		
	}
	
	public void setAge(int age)
	{
		this.age = age;
	}
	
	
	public void makeAnonymous() 
	{
		this.setName("anon");
	}
	
	
	
	public Person oldest(Person aPerson) 
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

	public String getName() 
	{
		return name;
	}

	public void setName(String name) 
	{
		this.name = name;
	}

	public char getGender() 
	{
		return gender;
	}

	public void setGender(char gender)
	{
		this.gender = gender;
	}
	
	public void setStudent(boolean student)
	{
		this.student = student;
	}
	
	public boolean isStudent()
	{
		return this.student;
	}
	
	
	
	

}