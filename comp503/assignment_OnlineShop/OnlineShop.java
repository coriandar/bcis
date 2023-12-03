package partA;

/**
 *	Class: OnlineShop
 *	--------------------------------------------------
 *	Holds and keeps track of an inventory of products.
*/
public class OnlineShop {
	private Product[] inventory;
	private int numProduct;
	private final int SIZE = 5;

	/**
	 *	Method: constructor
	 *	--------------------------------------------------
	 * 	Initialises the inventory and sets nProuct to zero.
	*/
	public OnlineShop() {
		this.inventory = new Product[SIZE];
		this.numProduct = 0;
	}
	
	/**
	 *	Method: toString override
	 *	--------------------------------------------------
	 *	@return formatted summary of the inventory.
	*/
	public String toString() {
		return inventorySummary();
	}
	
	/**
	 *	Method: addProduct
	 *	--------------------------------------------------
	 *	Adds a new product to the inventory and increments nProducts by 1,
	 *	as long as it does not exceed size of the inventory.
	 *  
	 *  @param newProduct - the new product to be added.
	*/
	public void addProduct(Product newProduct) {
		if(this.numProduct < SIZE) {
			this.inventory[this.numProduct] = newProduct;
			this.numProduct++;
		}
	}
	
	/**
	 *	Method: getProduct
	 *	--------------------------------------------------
	 *  @param productID - id of product to search for.
	 *	@return	the corresponding product in the inventory.
	 *	@exception out of bounds on input if exceed length of array.
	*/
	public Product getProduct(int productID) {
		if(1 <= productID && productID <= 5) {
			// array starts at 0.
			return this.inventory[productID - 1];			
		}
		else {
			return null;
		}
	}

	/**
	 *	Method: inventorySummary
	 *	--------------------------------------------------
	 * 	@return formatted inventory summary.
	*/
	private String inventorySummary() {
		StringBuilder inventory = new StringBuilder();
		
		inventory.append(tableHeader());
		
		for (int i = 1; i <= this.numProduct; i++) {
			inventory.append(String.format("| %5d %s", (i), this.getProduct(i)));
		}
		
		inventory.append(tableDivider());
		
		return inventory.toString();
	}
	
	/**
	 *	Method: tableHeader
	 *	--------------------------------------------------
	 * 	@return formatted header.
	*/
	public String tableHeader() {
		return tableDivider()+ tableRowCategories() + tableDivider();
	}
	
	
	/**
	 *	Method: tableRowCategories
	 *	--------------------------------------------------
	 * 	@return formatted categories row.
	*/
	public String tableRowCategories() {
		return String.format("| %5s | %-20s | %-20s | %11s | %10s | %10s |\n", 
				"ID", "Product", "Manufacturer", "Price", "Rating", "Reviews");
	}
	
	/**
	 *	Method: tableDivider
	 *	--------------------------------------------------
	 * 	@return formatted table divider.
	*/
	public String tableDivider() {
		StringBuilder tableDivider = new StringBuilder();
		
		tableDivider.append("+");
		
		for(int dashes = 0; dashes < tableRowCategories().length() - 3; dashes++) {			
			tableDivider.append('-');
		}
		
		tableDivider.append("+\n");
		
		return tableDivider.toString();
	}
}