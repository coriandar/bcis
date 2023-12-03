package examples;
/**
 * 
 * 
 * Divides cookies among kids and computes the leftover cookies
 * 
 * 
 * Adapted from Dathan, B. & Ramnath S. (2015). 
 * Object-Oriented Analysis and Design. 
 * Universities Press, Springer.
 * 
 * */
public class CookieProblem {

	public static void main(String[] args) 
	{
		int numberOfKids = 8;
		int numberOfCookies = 87;
		
		
		
		//integer division
		int cookiesPerKid = numberOfCookies / numberOfKids;

		double d_cookiesPerKid = numberOfCookies /0.0;
		System.out.println(d_cookiesPerKid);
		
		int leftoverCookies = numberOfCookies % numberOfKids;
		
		System.out.println(cookiesPerKid);
		System.out.println(leftoverCookies);
		
	}

}
