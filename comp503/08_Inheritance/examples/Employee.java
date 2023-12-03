package examples;

public class Employee extends Object
{
	protected String name;
	protected String id;
	
	protected void formatName()
	{
		this.name = this.name.toUpperCase();		
	}
	
	public Employee()
	{
		
		this.setId("0");
		this.setName("Anonymous");		
	}
	
	public Employee(String name,String id)
	{
		this.setName(name);
		this.setId(id);
	}
	
	public double pay()
	{
		return 1000.0;
	}
	
	//get and set methods omitted
	
	public String getName() 
	{
		return name;
	}
	public void setName(String name) 
	{
		this.name = name;
	}
	public String getId() 
	{
		return id;
	}
	public void setId(String id) 
	{
		this.id = id;
	}

}
