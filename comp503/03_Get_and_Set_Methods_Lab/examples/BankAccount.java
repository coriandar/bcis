package examples;

import java.text.DecimalFormat;
import java.util.Locale;

public class BankAccount 
{
	private double balance;

	public double getBalance()
	{
		return this.balance;
	}
	
	public BankAccount()
	{
		this.balance = 0.0;
	}
	
	public void deposit(double amount) 
	{
		this.balance += amount;
	}
	
	public void withdraw(double amount)
	{
		//we allow for overdraft.
		//how could we prevent against withdrawing money the customer do not have?
		this.balance -= amount;
	}
	
	public void borrow(double amount,double rate)
	{
		//calculate interest and add to amount to be borrowed
		double borrow = amount*rate + amount;		
		this.withdraw(borrow);		
	}

	public String toString()
	{	
		return "Your Account Balance: $"+this.balance;		
		//slightly more complicated
		//return String.format("%.2f",this.balance);
		//nice currency output based on a particular region
		//return DecimalFormat.getCurrencyInstance(Locale.US).format(this.balance);
	}
}