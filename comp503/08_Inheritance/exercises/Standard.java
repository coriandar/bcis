package exercises;

public class Standard {
	protected int numMinutes;
	protected int numTexts;
	protected final int limitMinutes;
	protected final int limitText;
	
	public Standard(int limitMin, int limitTxt) {
		this.numMinutes = 0;
		this.numTexts = 0;
		this.limitText = limitTxt;
		this.limitMinutes = limitMin;
	}
	
	@Override
	public String toString() {
		return "Standard:";
	}
	
	public void talk(int nMinTalked) {
		if((this.numMinutes + nMinTalked) <= this.limitMinutes) {
			this.numMinutes += nMinTalked;
		}
		else {
			System.out.println("Limit reached.");
		}
	}
	
	public void text(int nTextSent) {
		if((this.numTexts + nTextSent) <= this.limitText) {
			this.numTexts += nTextSent;
		}
		else {
			System.out.println("Limit reached.");
		}
	}
	
	public double billing() {
		return (this.numMinutes * 0.10) + (this.numTexts * 0.05);
	}
}
