package MidTermExamRefactor;

public class BankAccount {
	private Person customer;
	private int balance;
		
	public static void main(String[] args)
	{
		BankAccount bank1 = new BankAccount(new Person("Bob", "Belcher", 40));
		BankAccount bank2 = new BankAccount(new Person("Calvin", "Fischoeder", 60));
		
		//deposit
		bank1.deposit(1000);
		bank2.deposit(100000);
		System.out.println(bank1);
		System.out.println(bank2);
		
		//withdraw
		bank1.withdraw(9999);
		System.out.println(bank1);
		bank1.withdraw(100);
		System.out.println(bank1);
		
		//transfer
		bank1.transfer(bank2, 800);
		System.out.println(bank1);
		System.out.println(bank2);
	}


	/**
	 * Constructor
	 * */
	public BankAccount(Person customer) {
		setCustomer(customer);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "Account:"+getCustomer().getFirstName()+" "+getCustomer().getLastName()
				+" Balance:"+getBalance();
	}
	
	/**
	 * Methods
	 * */
	public void withdraw(int amount) {
		if(this.getBalance() >= amount) {
			this.setBalance(getBalance() - amount);
		}
	}
	
	public void deposit(int amount) {
		this.setBalance(getBalance() + amount);
	}
	
	public void transfer(BankAccount transferTo, int amount) {
		if(this.getBalance() >= amount) {
			this.withdraw(amount);
			transferTo.deposit(amount);
		}
	}
	
	/**
	 * GetSet
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
