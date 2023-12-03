package MidTermRevision;

public class TimeDuration {
	private int hours;
	private int minutes;
	private int seconds;
	
	
	public static void main(String[] args)
	{
		TimeDuration time = new TimeDuration(3, 12, 60);
		System.out.println(time);
	}

	/**
	 * Constructor
	 * */	
	public TimeDuration(int hours, int minutes, int seconds) {
		setHours(hours);
		setMinutes(minutes);
		setSeconds(seconds);
	}
	
	
	public TimeDuration() {
		this.setHours(0);
		this.setMinutes(0);
		this.setSeconds(0);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return "The total of number of seconds is "+sum()+".";
	}
	
	/**
	 * Methods
	 * */
	public int hourToSeconds() {
		return getHours() * 3600; 
	}
	
	public int minutesToSeconds() {
		return getMinutes() * 60; 
	}
	
	public int sum() {
		return hourToSeconds() + minutesToSeconds() + getSeconds();
	}

	/**
	 * GetSetMethods
	 * */
	public int getHours() {
		return hours;
	}

	public void setHours(int hours) {
		this.hours = hours;
	}

	public int getMinutes() {
		return minutes;
	}

	public void setMinutes(int minutes) {
		this.minutes = minutes;
	}

	public int getSeconds() {
		return seconds;
	}

	public void setSeconds(int seconds) {
		this.seconds = seconds;
	}
}
