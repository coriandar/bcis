package examples;

public class Passenger implements Comparable<Passenger>
{
	public RewardsClub membership;
	public String name;

	//--------------------------------------------------------------------------------
	public Passenger(String name,RewardsClub membership)
	{
		this.name = name;
		this.membership = membership;
	}
	//--------------------------------------------------------------------------------
	public String toString()
	{
		return name+": "+membership;
	}
	//--------------------------------------------------------------------------------
	@Override	
	public int compareTo(Passenger o) 
	{
		return this.membership.compareTo(o.membership);
	}
	
}