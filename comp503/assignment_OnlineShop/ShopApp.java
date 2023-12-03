package partA;
import java.util.Scanner;

/**
 *	Class: ShopApp
 *	--------------------------------------------------
 *	Application that is used as an interface that allows the
 *	customer to display and rate products in the online shop.
*/
public class ShopApp {
	private static OnlineShop onlineShop;

	public static void main(String[] args)
	{	
		// populates shop inventory.
		onlineShop = new OnlineShop();
		onlineShop.addProduct(new Product("T-800", "Cyberdyne", 250_000.00));
		onlineShop.addProduct(new Product("Headphones", "Sound Company", 19999.99));
		onlineShop.addProduct(new Product("Notebook", "Oxford", 3_500));
		onlineShop.addProduct(new Product("Magic Cube", "Toy Inc", 555.55));
		onlineShop.addProduct(new Product("Coffee Thermos", "Hot and Cold Company", 9.99));
		
		Scanner scan = new Scanner(System.in);
		char inputOption;
		
		// present menu interface to user.
		do {
			System.out.println("Please choose from options provided:");
			System.out.print("A. Display inventory\n" + "B. Rate Product\n" + "C. Exit\n");
			inputOption = Character.toLowerCase(scan.next().charAt(0));
			
			if(inputOption == 'a') {
				System.out.print(onlineShop);
			}
			else if(inputOption == 'b') {
				rateProduct(scan);
			}
		} while (inputOption != 'c');
		
		System.out.println("Exiting application...");
	}
	
	/**
	 *	Method: rateProduct
	 *	--------------------------------------------------
	 *	Asks user to select a product and rate it. Outputs
	 *	the products updated rating.
	 *
	 *	@param scan - scanner object.
	*/
	private static void rateProduct(Scanner scan) {
		boolean inputValid = false;
		int inputOption = 0;
		
		do {
			System.out.println(onlineShop + "Please select a product between 1 - 5:");
			inputOption = scan.nextInt();
			
			if(1 <= inputOption && inputOption <= 5) {
				System.out.print(selectedProduct(inputOption));
				inputValid = true;
			}
		} while(inputValid == false);
		
		inputValid = false;
		double rating = 0.0;
		
		do {
			System.out.println("Please enter your rating between 0.0 - 5.0:");
			rating = scan.nextDouble();
			
			if(0.0 <= rating && rating <= 5.0) {
				onlineShop.getProduct(inputOption).rateReliability(rating);
				System.out.print(selectedProduct(inputOption));
				inputValid = true;
			}
		} while(inputValid == false);
	}
	
	/**
	 *	Method: selectedProduct
	 *	--------------------------------------------------
	 *	@param inputOption - product ID of selected product.
	 *	@return	formatted description of the customers selected product.
	*/
	private static String selectedProduct(int inputOption) {
		return onlineShop.tableHeader() + String.format("| %5d ", inputOption)
				+ onlineShop.getProduct(inputOption) + onlineShop.tableDivider();
	}
}