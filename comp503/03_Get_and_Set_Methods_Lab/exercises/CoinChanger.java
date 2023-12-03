package exercises;

public class CoinChanger {
	private int ten;
	private int twenty;
	private int fifty;
	private int oneDollar;
	private int twoDollar;
	
	public int coinAsCents() {
		return ten*10 + twenty*20 + fifty*50 +
				oneDollar*100 + twoDollar*200;
	}
	
	public int dollars() {
		return this.coinAsCents() / 100;
	}
	
	public int cents() {
		return this.coinAsCents() % 100; 
	}
	
	public int getTen() {
		return ten;
	}
	
	public void setTen(int ten) {
		this.ten = ten;
	}
	
	public int getTwenty() {
		return twenty;
	}
	
	public void setTwenty(int twenty) {
		this.twenty = twenty;
	}
	
	public int getFifty() {
		return fifty;
	}
	
	public void setFifty(int fifty) {
		this.fifty = fifty;
	}
	
	public int getOneDollar() {
		return oneDollar;
	}
	
	public void setOneDollar(int oneDollar) {
		this.oneDollar = oneDollar;
	}
	
	public int getTwoDollar() {
		return twoDollar;
	}
	
	public void setTwoDollar(int twoDollar) {
		this.twoDollar = twoDollar;
	}
	
	public String toString() {
		StringBuilder total = new StringBuilder();
		total.append("$");
		total.append(this.dollars());
		total.append(".");
		total.append(this.cents());
		total.append("\n");
	
		return total.toString();
	}
}
