package exercises;

import java.util.Scanner;

public class AnimalApplication {

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		Animal[] animals = new Animal[4];
		
		int input = 0;
		for(int i = 0; i < animals.length; i++) {
			System.out.println("1: Dog Object or 2: Cat object");
			input = scan.nextInt();
			if(input == 1) {
				animals[i] = new Dog();
			}
			else if(input == 2) {
				animals[i] = new Cat();
			}
		}

		boolean feed = true;
		do {
			System.out.println("Select an animal to feed [0-4]");
			for(int i = 0; i < animals.length; i++) {
				System.out.println(i+" "+animals[i]);
			}
			
			input = scan.nextInt();
			if(input > 4 || input < 0) {
				System.out.println("Input out of range, quitting");
				feed = false;
			}
			else if(0 <= input && input <= 4) {
				animals[input].feed();
			}

		} while (feed == true);
	}
}
