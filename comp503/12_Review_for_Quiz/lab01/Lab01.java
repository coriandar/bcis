package lab01;

public class Lab01
{
	public static void main(String[] args)
	{
		Lab01 t = new Lab01();
		t.timeDuration();
		t.convertSeconds();
	}
	
	public void timeDuration() {
		int totalSec = 0;
		int hour = 1;
		totalSec += 60 * 60 * hour;
		System.out.println("Num of hours: " + hour);
		int min = 28;
		totalSec += 60 * min;
		System.out.println("Num of minutes: " + min);
		int sec = 42;
		totalSec += sec;
		System.out.println("Num of seconds: "+ sec);
		System.out.println("Total num of seconds: "+ totalSec +".\n");
	}
	
	public void convertSeconds() {
		int seconds = 9999;
		System.out.println("Seconds to convert: " + seconds);
		System.out.println(seconds + " is equivalent to");
		int hours = seconds / (60 * 60);
		int min = (seconds / 60) % 60;
		int sec = seconds % 60;
		System.out.println(hours+"hours "+min+"mins "+sec+"secs");
	}
}
