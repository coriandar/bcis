package examples;

public class Person {

	private String name;
	
	
	public Person(String name)
	{
		this.setName(name);
		
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}


	
	//string representation of a Person object
	public String toString()
	{
		return this.getName();
	}
	
	@Override
	public boolean equals(Object o)
	{
		Person p = (Person) o;
		return this.name.equals(p.name);
	}
	
	
}
