package examples;

public class Book 
{

	private String title;

	public Book(String title)
	{
		this.setTitle(title);
	}

	public String getTitle() 
	{
		return title;
	}

	public void setTitle(String title) 
	{

		if(title == null)
		{
			this.title = "";	
		} 
		else
		{
			this.title = title;
		}
	}

}
