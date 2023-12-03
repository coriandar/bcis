package examples;

public class MinutesToHours {
	/**
	 *
	 * Use division and the modulus operations to compute the number of hours and
	 * mins in a given amount of minutes.
	 *
	 */
	static final int NUMBER_OF_MINUTES_IN_HOUR = 60;

	public static void main(String[] args) {
		int minutes = 65;
		// there are 60 minutes in an hour
		int hours = minutes / NUMBER_OF_MINUTES_IN_HOUR;
		// compute the remaining minutes
		int remainingMinutes = minutes % NUMBER_OF_MINUTES_IN_HOUR;
		System.out.println(
				"There are: " + hours + " hours and " + remainingMinutes + " minutes in " + minutes + " minutes.");
	}
}