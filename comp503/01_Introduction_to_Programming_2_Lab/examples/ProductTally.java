package examples;
/**
 * 
 * Adapted from Dathan, B. & Ramnath S. (2015). 
 * Object-Oriented Analysis and Design. 
 * Universities Press, Springer.
 * 
 * */
public class ProductTally {

	public static void main(String[] args) 
	{
		int productCost = 16;
		int nProducts = 67;		
		int totalCost = productCost * nProducts;
		
		char eol = '\n';
		
		String tally = "Products cost: "+productCost+eol;
		
		tally += "Number Products Purchased: "+nProducts+eol;
		tally += "Total Amount Due: $"+totalCost;
		
		System.out.println(tally);
		
	}

}
