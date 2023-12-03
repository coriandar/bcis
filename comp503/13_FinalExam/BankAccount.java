package finalExam;

public abstract class BankAccount {
	private String name;
	protected int balance;
	
	public static void main(String[] args)
	{
		SuperSaver superAccount = new SuperSaver("Bob");
		superAccount.contribute();
		superAccount.deposit(1000);
		System.out.println("Account: SuperSaver | " + superAccount);
		superAccount.withdraw(100);

		BigSpender spenderAccount = new BigSpender("Linda");
		spenderAccount.deposit(100);
		spenderAccount.withdraw(1000);
		System.out.println("\nAccount: BigSpender | " + spenderAccount);
	}
	
	/**
	 * constructor
	 * */
	public BankAccount(String name) {
		this.name = name;
		this.balance = 0;
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "Name: " + getName() + " | Balance: " + getBalance();
	}
	
	/**
	 * methods
	 * */
	public abstract void withdraw(int amount);

	public void deposit(int amount) {
		if (amount > 0 ) {
			this.balance += amount;
		}
	}
	
	/**
	 * getMethodsOnly
	 * */
	public String getName() {
		return name;
	}

	public int getBalance() {
		return balance;
	}
}

/**
Question: The Bank Accounts (46 marks)
BankAccount.java
	1. BankAccount, abstract class.
	
	2. Instance variables String name, int balance.
	
	3. Constructor (String name), set balance to 0;
	
	4. toString() of instance variables.
	
	5. void withdraw(int) is abstract.
	
	6. Get methods only for instance variables.
	
SuperSaver.java
	1. intance variable int pension, get method only.
	
	2. Constructor. Set pension to 0.
	
	3. toString() override, concat pension to String.
	
	4. void withdraw(int amount). Does not modify, as balance cannot be withdrawn with this account.
	
	5. void contribute(). contributes set amount of 500 to pension.
	
BigSpender.java
	1. Constructor.
	
	2. void withdraw(int) withdraws from balance, can go into negative.

	In the static void main demonstrate all functionality of SuperSaver and BigSpender.
*/
