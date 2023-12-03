package lab03;

import java.util.*;

public class CoinChanger {
	private int ten;
	private int twenty;
	private int fifty;
	private int oneDollar;
	private int twoDollar;

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		CoinChanger app = new CoinChanger();
		
		do {
			System.out.println("Welcome to the Coin Changer:");
			System.out.println("Number of 10c coins:");
			app.setTen(scan.nextInt());
			System.out.println("Number of 20c coins:");
			app.setTwenty(scan.nextInt());
			System.out.println("Number of 50c coins:");
			app.setFifty(scan.nextInt());
			System.out.println("Number of $1 coins:");
			app.setOneDollar(scan.nextInt());
			System.out.println("Number of $2 coins:");
			app.setTwoDollar(scan.nextInt());
			System.out.println("The total value is: $"+app.dollars()+"."+app.cents());
			
			char input = app.continueApp(scan);
			
			if (input == 'N') {
				System.out.println("Closing...");
				break;
			}
		} while(true);
	}

	public char continueApp(Scanner scan) {
		char input = '\0';
		
		do {
			System.out.println("Would you like to continue? (Y/N)");
			input = Character.toUpperCase(scan.next().charAt(0));
			if (input == 'Y' || input == 'N') {
				break;
			}
		} while (true);
		
		return input;
	}
	
	public int coinsAsCents() {
		return ((getTen() * 10) + (getTwenty() * 20) + (getFifty() * 50)
				+ (getOneDollar() * 100) + (getTwoDollar() * 200));
	}
	
	public int dollars() {
		return this.coinsAsCents() / 100;
	}
	
	public int cents() {
		return this.coinsAsCents() % 100;
	}
	
	/**
	 * getSetMethods
	 * */
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
}
