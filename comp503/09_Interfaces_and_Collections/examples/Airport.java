package examples;

import java.util.ArrayList;
import java.util.Collections;

public class Airport {



	public static void main(String[] args) {
		ArrayList<Passenger> passengers = new ArrayList<Passenger>();

		passengers.add(new Passenger("Jill",RewardsClub.NONMEMBER));
		passengers.add(new Passenger("Ken",RewardsClub.BRONZE));
		passengers.add(new Passenger("Frank",RewardsClub.BRONZE));
		passengers.add(new Passenger("Alice",RewardsClub.SILVER));
		passengers.add(new Passenger("Bob",RewardsClub.GOLD));
		passengers.add(new Passenger("Adam",RewardsClub.GOLD));
		passengers.add(new Passenger("Carl",RewardsClub.GOLD));
		passengers.add(new Passenger("Bill",RewardsClub.SILVER));
		
		System.out.println("Unsorted: ");
		System.out.println(passengers);
		
		Collections.sort(passengers);
		System.out.println("Sorted: ");
		System.out.println(passengers);
		
		Collections.shuffle(passengers);
		System.out.println("Shuffled: ");
		System.out.println(passengers);
	}

}
