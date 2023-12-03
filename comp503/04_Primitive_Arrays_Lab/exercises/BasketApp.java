package exercises;

public class BasketApp {

	public static void main(String[] args) {
		
		final int SIZE = 5;
		Basket shoppingCart = new Basket(SIZE);
		
		shoppingCart.addPurchase(new Purchase("item1", 10.00));
		shoppingCart.addPurchase(new Purchase("item2", 10.00));
		shoppingCart.addPurchase(new Purchase("item3", 10.00));
		shoppingCart.addPurchase(new Purchase("item4", 20.00));
		shoppingCart.addPurchase(new Purchase("item5", 10.00));
		
		System.out.println(shoppingCart.getNumOfPurchases());
		
		System.out.println("Most expensive: ");
		System.out.println(shoppingCart.getMostExpensive());
		
		System.out.println("\nPrint receipt: ");
		shoppingCart.printReceipt();
	}
}
