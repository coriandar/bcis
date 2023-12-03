package examples;

public class Seat 
{
	
	private boolean reserved;

	public boolean isReserved() 
	{
		return reserved;
	}

	public void setReserved(boolean reserved) 
	{
		this.reserved = reserved;
	}
	
	public Seat()
	{
		this.reserved=false;
	}
		
	public String toString()
	{
		String out = this.isReserved()?"X": " ";
		return "["+out+"]";
				
	}
}