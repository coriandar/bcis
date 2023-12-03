package examples;

public class BonusEmployee extends Employee
{
	private double bonus;
	
	
	
	
	public BonusEmployee(String name, String id,double bonus)
	{
		super(name, id);
		this.setBonus(bonus);
	}

	public double getBonus() {
		return bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}
	
	@Override
	public double pay()
	{
		double base = super.pay();		
		return base + bonus;		
	}
}