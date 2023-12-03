package examples;

public class CashPoint 
{

	public static void main(String[] args) 
	{
	
		
		BankAccount account = new BankAccount();
		System.out.println("Bank Account balance: "+account);
		account.deposit(100);
		System.out.println("Bank Account balance: "+account);
		account.withdraw(50);
		System.out.println("Bank Account balance: "+account);
		account.borrow(1000,0.0101);
		System.out.println("Bank Account balance: "+account);
		
		//not allowed
		//account.balance += 1000;
		
		

	}

}
