package MidTermRevision;

public class TimeConvert {
	private int totalSeconds;
	
	public static void main(String[] args)
	{
		TimeConvert convert = new TimeConvert(9999);
		System.out.println(convert);
	}
	
	public TimeConvert(int seconds) {
		this.totalSeconds = seconds;
	}
	
	public String toString() {
		return this.totalSeconds+" seconds is equivalent to\n"
				+totalSecToHour()+" hours\n"
				+totalSecToMinute()+" minutes\n"
				+totalSecToSeconds()+" seconds\n";
	}
	
	public int totalSecToHour() {
		return this.totalSeconds / 3600;
	}
	
	public int totalSecToMinute() {
		return (this.totalSeconds % 3600) / 60;
	}
	
	public int totalSecToSeconds() {
		return (this.totalSeconds % 3600) % 60;
	}
}
