package MidTermRevision;

public class CoinChanger {
	private int tenQty;
	private int twentyQty;
	private int fiftyQty;
	private int oneDollarQty;
	private int twoDollarQty;
	
	public static void main(String[] args)
	{
		CoinChanger coins = new CoinChanger(4,9,1,2,1);
		System.out.println(coins);
	}

	/**
	 * Constructor
	 * */
	public CoinChanger(int ten, int twenty, int fifty, int one, int two) {
		setTenQty(ten);
		setTwentyQty(twenty);
		setFiftyQty(fifty);
		setOneDollarQty(one);
		setTwoDollarQty(two);
	}

	/**
	 * toString
	 * */
	public String toString() {
		return "Value: $"+dollars()+"."+cents();
	}
	
	/**
	 * Methods
	 * */
	public int coinAsCents() {
		return (getTenQty()*10)+(getTwentyQty()*20)+(getFiftyQty()*50)+
				(getOneDollarQty()*100)+(getTwoDollarQty()*200);
	}
	
	public int dollars() {
		return this.coinAsCents() / 100;
	}
	
	public int cents() {
		return this.coinAsCents() % 100;
	}
	
	/**
	 * GetSetMethods
	 * */
	public int getTenQty() {
		return tenQty;
	}

	public void setTenQty(int tenQty) {
		this.tenQty = tenQty;
	}

	public int getTwentyQty() {
		return twentyQty;
	}

	public void setTwentyQty(int twentyQty) {
		this.twentyQty = twentyQty;
	}

	public int getFiftyQty() {
		return fiftyQty;
	}

	public void setFiftyQty(int fiftyQty) {
		this.fiftyQty = fiftyQty;
	}

	public int getOneDollarQty() {
		return oneDollarQty;
	}

	public void setOneDollarQty(int oneDollarQty) {
		this.oneDollarQty = oneDollarQty;
	}

	public int getTwoDollarQty() {
		return twoDollarQty;
	}

	public void setTwoDollarQty(int twoDollarQty) {
		this.twoDollarQty = twoDollarQty;
	}
}
