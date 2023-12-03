package exercises;
import java.util.Scanner;

public class CoinChangerApplication {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scan = new Scanner(System.in);
		CoinChanger coins = new CoinChanger();
		
		char continueLoop = 'Y';
		
		do
		{
			System.out.print("Welcome to the Coin Changer Machine. ");
			System.out.println("Please input your coins:");
			
			System.out.println("Number of 10c coins:");
			coins.setTen(scan.nextInt());
			
			System.out.println("Number of 20c coins:");
			coins.setTwenty(scan.nextInt());
			
			System.out.println("Number of 50c coins:");
			coins.setFifty(scan.nextInt());
			
			System.out.println("Number of dollar coins:");
			coins.setOneDollar(scan.nextInt());
			
			System.out.println("Number of two dollar coins:");
			coins.setTwoDollar(scan.nextInt());
			
			System.out.print("The total value of the coin collection is: ");
			System.out.println(coins);
			
			System.out.println("Would you like to continue? (Y?)");
			continueLoop = scan.next().charAt(0);
		}
		while (continueLoop == 'Y');
		
		System.out.println("...");
		System.out.println("Program ended.");
	}
}
