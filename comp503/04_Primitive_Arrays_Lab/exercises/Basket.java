package exercises;

public class Basket {
	private Purchase[] itemBasket;
	private int numOfPurchases;
	
	public Basket(int basketSize) {
		if(basketSize > 0) {
			this.setItemBasket(new Purchase[basketSize]);
		}
		else {
			this.setItemBasket(new Purchase[10]);
		}
		
		setNumOfPurchases(0);
	}

	public void addPurchase(Purchase item) {
		if(getNumOfPurchases() < this.basketSize()) {
			itemBasket[this.getNumOfPurchases()] = item;
			this.incrementPurchases();
		}
		else {
			System.out.println("Basket is full!");
		}
	}
	
	public Purchase getMostExpensive() {
		Purchase itemExpensive = this.itemBasket[0];
		
		for (Purchase item: this.itemBasket) {
			if(itemExpensive.getPrice() < item.getPrice()) {
				itemExpensive = item;
			}
		}
		
		return itemExpensive;
	}
	
	public Purchase[] getPurchased() {
		return this.itemBasket;
	}
	
	public double total() {
		double total = 0.0;
		
		for(Purchase item : this.itemBasket) {
			total += item.getPrice();
		}
		
		return total;
	}
	
	public void printReceipt() {
		for (Purchase item : this.itemBasket) {
			System.out.println(item);
		}
		
		System.out.print("Total: ");
		System.out.println(String.format("$%.2f", this.total()));
	}
	
	public void incrementPurchases() {
		this.numOfPurchases++;
	}
	
	public int basketSize() {
		return  this.itemBasket.length;
	}
	
	//get and setter
	public int getNumOfPurchases() {
		return numOfPurchases;
	}

	public void setNumOfPurchases(int numOfPurchases) {
		this.numOfPurchases = numOfPurchases;
	}

	public Purchase[] getItemBasket() {
		return itemBasket;
	}

	public void setItemBasket(Purchase[] itemBasket) {
		this.itemBasket = itemBasket;
	}
}