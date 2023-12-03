package examples;

import java.util.Scanner;

public class PersonFullName {

	String firstname;
	String lastname;

	PersonFullName(String firstname,String lastname)
	{
		this.firstname = firstname;
		this.lastname = lastname;
	}

	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);

		System.out.println("Please enter first name:");
		String firstname = keyboard.nextLine();

		System.out.println("Please enter last name:");
		String lastname = keyboard.nextLine();

		PersonFullName p1 = new PersonFullName(firstname,lastname);

		//do something with p1.

	}

}
