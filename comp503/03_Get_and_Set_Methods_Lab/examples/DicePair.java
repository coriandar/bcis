package examples;

public class DicePair 
{

	private Die die1;
	private Die die2;

	public void roll()
	{
		this.die1.roll();
		this.die2.roll();

	}

	public int faceValue()
	{
		return this.die1.getFaceValue()+this.die2.getFaceValue();
	}

	public DicePair()
	{
		this.die1 = new Die();
		this.die2 = new Die();
		this.roll();
	}



	


}
