package examples;

/**
 * 
 * @author Jamal and Kenneth Johnson
 *
 */
//------------------------------------------------
final public class SmartSaver extends BankAccount{	
	public SmartSaver(String customer) 
	{
		super(customer);
		this.deposit(50);
	}
	//------------------------------------------------
	public void deposit(double amount)
	{
		super.deposit(amount);
		if(amount>=100)
			super.deposit(amount*0.05);
	}
	//------------------------------------------------
	public void withdraw(double amount)
	{
	}
}
