package examples;

public class BankAccount 
{
	
	private String name;
	private int accountNumber;
	private double balance;
	
	private static final int  OFFSET=1000;
	private static int CURRENT_ACCOUNT_NUMBER=OFFSET;
	
	
	public BankAccount(String name)
	{
		this.setName(name);
		this.balance = 0.0;
		this.accountNumber = BankAccount.CURRENT_ACCOUNT_NUMBER++;
	}

	static public int getNumberOfAccounts()
	{
		return BankAccount.CURRENT_ACCOUNT_NUMBER - OFFSET;
	}

	public int getAccountNumber() {
		return accountNumber;
	}

	public double getBalance() {
		return balance;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	
	public void withdraw(double amount)
	{
	this.balance-=amount;	
	}
	
	public void deposit(double amount)
	{
		this.balance+=amount;
	}
	

	/**
	 * 
	 * constructs a BankAccount with 100$ 
	 * 
	 * */
	public static BankAccount hundredDeposit(String name)
	{
		
		BankAccount ba = new BankAccount(name);
		ba.deposit(100.0);		
		return ba;		
	}
	
}
