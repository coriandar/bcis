package exercises;

public class DataMobile extends Standard {
	protected int dataUsage;
	protected final int limitData;
	
	public DataMobile(int limitMin, int limitTxt, int limitData) {
		super(limitMin, limitTxt);
		this.limitData = limitData;
	}
	
	@Override
	public String toString() {
		return "DataMobile:";
	}
	
	
	public void transfer(int n) {
		if((this.dataUsage + n) <= this.limitData) {
			this.dataUsage += n;
		}
		else {
			System.out.println("Limit reached.");
		}
	}
	
	@Override
	public double billing() {
		return super.billing() + (this.dataUsage * 0.15);
	}
	
	/**
	 * getSetMethods
	 * */
	public int getDataUsage() {
		return this.dataUsage;
	}
	
	public void setDataUsage(int dataUsed) {
		this.dataUsage += dataUsed;
	}
}
