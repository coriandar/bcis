package examples;

public class RelationalOperators {

	public static void main(String[] args) 
	{

		int x = 10;
		int y = 11;
		int z = 12;
				
		System.out.println(x == (z - 2));		
		System.out.println(x != (z + 2));		
		System.out.println(y > x);
		System.out.println(z < x+y);
		System.out.println(z <= 13);
		System.out.println(z >= 12);
		
		boolean testResult = x+y+z < 0;
		System.out.println(testResult);
		
	}

}
