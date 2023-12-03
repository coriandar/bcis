package examples;

public class CinemaSeatBookingApp {

	public static void main(String[] args) 
	{
	
		
		Cinema cinema = new Cinema();
		
		System.out.println(cinema);
		
		cinema.reserve(0,0);
		
		System.out.println(cinema);
	}

}
