package examples;

public class Cinema 
{
	private final int MAX_ROW = 5;
	private final int MAX_COL = 7;

	private Seat[][] seats;

	public Cinema()
	{
		this.seats = new Seat[MAX_ROW][MAX_COL];

		for(int r = 0;r<MAX_ROW;r++)
		{
			for(int c = 0;c<MAX_COL;c++)
			{
				this.seats[r][c] = new Seat();
			}
		}		
	}
	
	public int getNumberOfRows()
	{
		return this.MAX_ROW;
	}
	
	public int getNumberOfColumns()
	{
		return this.MAX_COL;
	}

	
	public Seat getSeat(int r, int c)
	{
		if(this.isValidRow(r) & this.isValidColumn(c))
		{
			return this.seats[r][c];
		}
		return null;
	}
	
	public String toString()
	{
		String out = "";

		for(Seat[] row : this.seats)
		{
			for(Seat seat : row)
			{
				out+= seat+" ";
			}
			out+="\n";			
		}
		return out;
	}


	private boolean isValidRow(int r)
	{	
		return (r >= 0) & (r < MAX_ROW);
	}

	private boolean isValidColumn(int c)
	{	
		return (c >= 0) & (c < MAX_COL);	
	}


	public void reserve(int r, int c) 
	{
		if(this.isValidRow(r) && this.isValidColumn(c))
		{			
			this.seats[r][c].setReserved(true);
		}
	}

}
