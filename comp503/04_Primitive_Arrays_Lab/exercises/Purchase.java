package exercises;

public class Purchase {
	private String itemPurchased;
	private double price;
	
	//constructor
	public Purchase() {
		this.setItemPurchased("");	
	}
	
	public Purchase(String item, double price) {
		this.setItemPurchased(item);
		this.setPrice(price);
	}

	public String toString() {
		StringBuilder itemDescription = new StringBuilder();
		
		itemDescription.append("Item: ");
		itemDescription.append(this.getItemPurchased());
		itemDescription.append(" Price: $");
		itemDescription.append(String.format("%.2f", this.getPrice()));
		
		return itemDescription.toString();
	}
	
	public String getItemPurchased() {
		return itemPurchased;
	}

	public void setItemPurchased(String itemPurchased) {
		this.itemPurchased = itemPurchased;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}
}
