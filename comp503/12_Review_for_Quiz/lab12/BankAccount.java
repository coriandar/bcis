package lab12;

public class BankAccount {
	private String name;
	private String pin;
	private double balance;
	private int numTransactions;
	
	public static void main(String[] args) {
		BankAccount test = new BankAccount("test");
		test.deposit(100);
		test.withdraw(0.55);
		System.out.println(test);
	}

	/**
	 * Constructor
	 * */
	public BankAccount(String name) {
		setName(name);
		setPin("0000");
		setNumTransactions(1);	
		setBalance(0);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "Name: "+getName()+" Balance: "+getBalance()
		+" Transactions: "+getNumTransactions();
	}
	
	/**
	 * Methods
	 * */
	public void deposit(double amount) {
		setBalance(getBalance() + amount);
		this.numTransactions++;
	}

	public void withdraw(double amount) {
		setBalance(getBalance() - amount);
		this.numTransactions++;
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getPin() {
		return pin;
	}
	
	public void setPin(String pin) {
		this.pin = pin;
	}
	
	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}
	
	public int getNumTransactions() {
		return numTransactions;
	}
	
	public void setNumTransactions(int numTransactions) {
		this.numTransactions = numTransactions;
	}
}
