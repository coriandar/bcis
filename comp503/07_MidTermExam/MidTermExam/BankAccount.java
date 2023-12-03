package MidTermExam;

public class BankAccount {
	private Person customer;
	private int balance;
	
	public static void main(String[] args)
	{
		BankAccount bank1 = new BankAccount(new Person("Bob", "Belcher", 45));
		BankAccount bank2 = new BankAccount(new Person("Mr.", "Fishodour", 60));
		
		//Deposit
		bank1.deposit(1000);
		System.out.println(bank1);
		bank2.deposit(100000);
		System.out.println(bank2);
		
		//Withdraw
		bank1.withdraw(9999);
		System.out.println(bank1);
		bank1.withdraw(10);
		System.out.println(bank1);
		
		//Transfer
		bank1.transfer(bank2, 900);
		System.out.println(bank1);
		System.out.println(bank2);
	}
	
	/**
	 * Constructor
	 * */
	public BankAccount(Person customer) {
		setCustomer(customer);
		setBalance(0);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return customer.getFirstName()+" "+customer.getLastName()+", Balance: $"
				+getBalance();
	}
	
	/**
	 * Methods
	 * */
	public void withdraw(int amount) {
		if(this.getBalance() >= amount) {
			this.setBalance(this.getBalance() - amount);
		}
	}
	
	public void deposit(int amount) {
		if(amount > 0) {
			this.setBalance(this.getBalance() + amount);
		}
	}
	
	public void transfer(BankAccount transferTo,int amount) {
		if(this.getBalance() >= amount) {
			this.withdraw(amount);
			transferTo.deposit(amount);
		}
	}
	
	
	/**
	 * GetSetMethods
	 * */
	public Person getCustomer() {
		return customer;
	}
	
	public void setCustomer(Person customer) {
		this.customer = customer;
	}
	
	public int getBalance() {
		return balance;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
}
