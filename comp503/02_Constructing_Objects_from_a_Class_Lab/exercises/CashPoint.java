package exercises;
import java.util.Scanner;

public class CashPoint {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("Account name: ");
		String accountName = scan.nextLine();
		int amount = 0;
		
		BankAccount account = new BankAccount(accountName);
		System.out.print("Account balance: ");
		System.out.println(account.accountBalance + "\n");
		
		System.out.print("Amount to deposit: ");
		amount = scan.nextInt();
		account.deposit(amount);
		System.out.print("Account balance: ");
		System.out.println(account.accountBalance + "\n");

		System.out.print("Amount to withdraw: ");
		amount = scan.nextInt();
		account.withdraw(amount);
		System.out.print("Account balance: ");
		System.out.println(account.accountBalance + "\n");

		System.out.print("Amount to borrow: ");
		amount = scan.nextInt();
		account.borrow(amount);
		System.out.print("Account balance: ");
		System.out.println(account.accountBalance + "\n");
	}
}
