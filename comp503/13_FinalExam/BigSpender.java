package finalExam;

public class BigSpender extends BankAccount{

	public BigSpender(String name) {
		super(name);
	}

	@Override
	public void withdraw(int amount) {
		super.balance -= amount;
	}
}
