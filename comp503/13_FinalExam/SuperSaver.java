package finalExam;

public class SuperSaver extends BankAccount {
	private int pension;
	
	/**
	 * constructor
	 * */
	public SuperSaver(String name) {
		super(name);
		this.pension = 0;
	}

	/**
	 * toString
	 * */
	@Override
	public String toString() {
		return super.toString() + " | Pension: " + getPension();
	}
	
	/**
	 * methods
	 * */
	public void contribute() {
		this.pension += 500;
	}
	
	@Override
	public void withdraw(int amount) {
		System.out.println("SuperSaver Account...cannot be withdrawn.");
	}
	
	/**
	 * getMethodOnly
	 * */
	public int getPension() {
		return pension;
	}
}
