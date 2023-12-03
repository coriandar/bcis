package exercises;

public class DataHeavy extends DataMobile {
	protected int overLimit;
	
	public DataHeavy(int limitMin, int limitTxt, int limitData) {
		super(limitMin, limitTxt, limitData);
	}
	
	@Override
	public String toString() {
		return "DataHeavy:";
	}
	
	@Override
	public void transfer(int n) {
		if((this.dataUsage + n) <= this.limitData) {
			this.dataUsage += n;
		}
		else {
			int difference = (this.dataUsage + n) - this.limitData;
			this.overLimit += difference;
			this.dataUsage = this.limitData;
		}
	}
	
	@Override
	public double billing() {
		return (this.numMinutes * 0.10) + (this.dataUsage * 0.25) + (this.overLimit * 0.30);
	}
	
	public int getOverLimit() {
		return this.overLimit;
	}
}
