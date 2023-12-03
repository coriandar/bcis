package exercises;

import java.util.Scanner;

public class TrafficLightApp {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		String input = "";
		int redCount = 0;
		boolean stop = false;
		
		do {
			// can do TrafficLight light = null;
			System.out.print("Colour? ");
			input = scan.nextLine();
			
			if(input.equals("RED") || input.equals("YELLOW") || input.equals("GREEN")) {
				if(input.equals("RED")) {
					redCount++;
				}
				
				if(redCount == 2) {
					stop = true;
				}
				
				for(TrafficLight lightColour : TrafficLight.values()) {
					if(input.equals(lightColour.name())) {
						System.out.println(TrafficLight.valueOf(input));
					}
				}
			}
			else {
				System.out.println("Invalid string...");
			}
		} while(stop != true);
		
		System.out.println("Programs terminated...");
	}
}
