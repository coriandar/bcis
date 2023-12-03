package exercises;

public class SimpleDateApplication {

	public static void main(String[] args)
	{
		SimpleDate d1 = new SimpleDate();
		System.out.println("d1: "+ d1);
		
		SimpleDate d2 = new SimpleDate();
		d2.setDay(30);
		d2.setMonth(12);
		d2.setYear(2555);
		System.out.println("d2: "+ d2);
		
		SimpleDate d3 = new SimpleDate();
		d3.setDate(10, 11, 2022);
		System.out.println("d3: "+ d3);
		
		SimpleDate d4 = new SimpleDate(14, 03, 2019);
		System.out.println("d4: "+ d4);
	}
}
