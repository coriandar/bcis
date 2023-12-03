package partA;

/**
 *	Class: Product
 *	--------------------------------------------------
 *	Contains information about a product for an online shop.
*/
public class Product {
	private String productName;
	private String productManufacturer;
	private double productPrice;
	private double productRating;
	private int productReviewCounter;
	
	/**
	 *	Method: constructors
	 *	--------------------------------------------------
	 *	Initialises the instance variables, with default values
	 *	where necessary.
	*/
	public Product(String nameProduct, String nameManufacturer, double priceRetail) {
		this.setProductName(nameProduct);
		this.setProductManufacturer(nameManufacturer);
		this.setProductPrice(priceRetail);
		this.setProductRating(0.0); //default value
		this.setProductReviewCounter(0); //default value
	}

	public Product(String nameProduct, String nameManufacturer) {
		this.setProductName(nameProduct);
		this.setProductManufacturer(nameManufacturer);
		this.setProductPrice(0.0); //default value
		this.setProductRating(0.0); //default value
		this.setProductReviewCounter(0); //default value
	}
	
	/**
	 *	Method: toString override
	 *	--------------------------------------------------
	 *	@return formatted description about the product.
	*/
	public String toString() {
		return String.format("| %-20s | %-20s | $%10.2f | %10.2f | %10d |\n", 
				this.getProductName(), this.getProductManufacturer(), this.getProductPrice(), 
				this.getProductRating(), this.getProductReviewCounter());
	}

	/**
	 *	Method: rateReliability
	 *	--------------------------------------------------
	 * 	Takes customer's rating and computes the new reliability rating,
	 * 	then updates the product reliability rating.
	 * 
	 *	@param rating - customer's rating.
	*/
	public void rateReliability (double rating) {
		if(0.0 <= rating && rating <= 5.0) {
			double newRating = this.getProductRating() * this.getProductReviewCounter();
			newRating += rating;
			this.setProductReviewCounter(getProductReviewCounter() + 1);
			newRating /= this.getProductReviewCounter();
			this.setProductRating(newRating);
		}
	}
	
	/**
	 *	Method: standard get & set methods
	 *	--------------------------------------------------
	*/
	public String getProductName() {
		return productName;
	}

	public void setProductName(String productName) {
		this.productName = productName;
	}

	public String getProductManufacturer() {
		return this.productManufacturer;
	}

	public void setProductManufacturer(String productManufacturer) {
		this.productManufacturer = productManufacturer;
	}

	public double getProductPrice() {
		return this.productPrice;
	}

	public void setProductPrice(double productPrice) {
		this.productPrice = productPrice;
	}
	
	public double getProductRating() {
		return this.productRating;
	}

	public void setProductRating(double productRating) {
		this.productRating = productRating;
	}
	
	public int getProductReviewCounter() {
		return this.productReviewCounter;
	}

	public void setProductReviewCounter(int productReviewCounter) {
		this.productReviewCounter = productReviewCounter;
	}
}