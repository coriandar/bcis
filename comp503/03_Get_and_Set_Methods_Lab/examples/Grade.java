package examples;

public class Grade {
	private int percentage;
	public Grade(int percentage)
	{
		this.percentage = 0;		
		this.setPercentage(percentage);
	}


	public int getPercentage() 
	{
		return percentage;
	}



	public void setPercentage(int percentage) 
	{
		if(percentage>=0 && percentage<=100)
		{
			this.percentage = percentage;
		}		
	}

	public static void main(String[] args) 
	{
		Grade p2 = new Grade(75);//create a grade object
		System.out.println(p2.getPercentage());
		p2.setPercentage(110);
		System.out.println(p2.getPercentage());
	}
}