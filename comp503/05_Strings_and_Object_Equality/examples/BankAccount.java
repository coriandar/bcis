package examples;

public class BankAccount {

	private Person person;
	private double balance;




	
	public BankAccount(Person person)
	{
		this.person = person;
		this.balance = 0.0;
	}




	public void withdraw(int value)
	{
		this.balance-=value;
	}

	public void deposit(double value)
	{

		this.balance+=value;

	}

	public double getBalance()
	{
		return this.balance;
	}

	public Person getPerson() {
		return person;
	}




	public void setPerson(Person person) {
		this.person = person;
	}
	
	public boolean equals(Object o)
	{
		BankAccount ba = (BankAccount) o;		
		return (this.balance == ba.balance && this.person.equals(ba.person));		
	}
	
	public static void main(String[] args) 
	{
		
		BankAccount ba1 = new BankAccount(new Person("Bob"));		
		BankAccount ba2 = new BankAccount(new Person("Bob"));
		
		//returns true
		System.out.println("equal: "+ba1.equals(ba2));		
		ba1.deposit(100);
		
		//returns false
		System.out.println("equal: "+ba1.equals(ba2));
	}
}




