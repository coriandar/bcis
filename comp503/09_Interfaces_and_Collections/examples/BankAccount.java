package examples;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class BankAccount implements Comparable<BankAccount>
{
	
	private Double balance;
	private String name;
	
	public void withdraw(double amount)
	{
		this.balance-=amount;
	}
	
	
	public void deposit(double amount)
	{
		this.balance+=amount;
	}
	
	public BankAccount(String name)
	{
		this.setName(name);
		this.balance = 0.0;
	}
	
	@Override
	public int compareTo(BankAccount o) 
	{		
		return this.balance.compareTo(o.balance);
	}


	public String getName() 
	{
		return name;
	}


	public void setName(String name) 
	{
		this.name = name;
	}
	
	public double getBalance()
	{
		return this.balance;
	}
	
	public String toString()
	{
		return this.getName()+" $"+this.getBalance();
	}
	
	public static void main(String[] args)
	{
		
		BankAccount jim = new BankAccount("Jim");
		jim.deposit(100);
		BankAccount bob = new BankAccount("Bob");
		bob.deposit(140.0);
		BankAccount alice = new BankAccount("Alice");
		alice.deposit(120);
		BankAccount sam = new BankAccount("Sam");
		sam.deposit(90);
		BankAccount jane = new BankAccount("Jane");
		jane.deposit(200);
		
		ArrayList<BankAccount> bankAccounts = new ArrayList<BankAccount>(Arrays.asList(jim,bob,alice,sam,jane));
		
		System.out.println(bankAccounts);
		Collections.sort(bankAccounts);
		System.out.println(bankAccounts);
	}
}
