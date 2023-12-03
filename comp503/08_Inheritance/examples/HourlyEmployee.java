package examples;

public class HourlyEmployee extends Employee
{
	private int hoursWorked;
	
	public HourlyEmployee()
	{
		//accessing protected instance variables and methods 
		this.formatName();
		this.id = "#"+this.id;		
		this.setHoursWorked(0);		
	}
	
	public void setHoursWorked(int hoursWorked)
	{
		this.hoursWorked = hoursWorked;
	}
	
	public int getHoursWorked()
	{
		return this.hoursWorked;
	}
	
	public HourlyEmployee(String name,String id,int hoursWorked)
	{
		super(name,id);		
		this.setHoursWorked(hoursWorked);		
	}
	
	@Override
	public double pay()
	{	
		return this.hoursWorked*150;	
	}
}
