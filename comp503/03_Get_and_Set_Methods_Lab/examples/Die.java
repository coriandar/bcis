package examples;

import java.util.Random;

public class Die 
{	
	private int faceValue;
	private Random rand;
	
	public Die()
	{
		this.rand = new Random();
		this.roll();
	}
		
	public int getFaceValue()
	{
		return this.faceValue;
	}
	
	public void roll()
	{
		this.faceValue = rand.nextInt(5)+1;
	}
	
	public String toString()
	{
		return this.faceValue+"";
	}
}
