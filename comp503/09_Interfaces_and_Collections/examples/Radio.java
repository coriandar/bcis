package examples;

public class Radio implements PowerButton
{

	int radioPower;
	
	@Override
	public void on() 
	{
		System.out.println("Radio is switched on");
		this.radioPower=100;		
	}

	@Override
	public void off() 
	{
		System.out.println("Radio is switched off");
		this.radioPower = -1;			
	}

	@Override
	public boolean isOn() 
	{	
		return !(this.radioPower<=0);
	}
}
