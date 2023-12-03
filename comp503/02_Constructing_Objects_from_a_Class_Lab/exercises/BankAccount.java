package exercises;

public class BankAccount {
	String nameCustomer;
	double accountBalance;
	
	public BankAccount (String nameCustomer) {
		this.nameCustomer = nameCustomer;
		this.accountBalance = 0.0;
	}
	
	public void withdraw(int amount) {
		if (this.accountBalance >= amount) {
			this.accountBalance -= (double) amount;			
		}
	}
	
	public void deposit(int amount) {
		if (amount > 0) {			
			this.accountBalance += (double) amount;
		}
	}
	
	public void borrow(int amount) {
		double interest = (double) (amount * 0.1);
		amount += interest;
		this.accountBalance -= (double) amount;
	}
}
