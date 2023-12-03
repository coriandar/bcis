package exercises;
import java.util.Scanner;

public class Person {
	int age;
	double weight;
	boolean student;
	char gender;
	
	public Person(int age, double weight, boolean student, char gender) {
		this.age = age;
		this.weight = weight;
		this.student = student;
		this.gender = gender;
	}
	
	public Person() {
		this.age = 0;
		this.weight = 0;
		this.student = false;
		this.gender = 0;
	}
	
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		Person person1 = new Person();
		
		System.out.println("Please enter the person's age:");
		person1.age = scan.nextInt();
		
		System.out.println("Please enter the person's weight:");
		person1.weight = scan.nextDouble();
		
		System.out.println("Is the person a student (true/false):");
		person1.student = scan.nextBoolean();
		
		System.out.println("Please enter the person's gender (M/F):");
		person1.gender = scan.next().charAt(0);
		
		System.out.print("Person: age: ");
		System.out.print(person1.age);
		
		System.out.print(" weight: ");
		System.out.print(person1.weight);
		
		System.out.print(" student: ");
		System.out.print(person1.student);
		
		System.out.print(" gender: ");
		System.out.println(person1.gender);
		
		/*
		Boolean testIsStudent = person1.isStudent();
		System.out.println(testIsStudent);
		
		int testGetAge = person1.getAge();
		System.out.println(testGetAge);
		
		int testCompDis = person1.computeDiscountPercent();
		System.out.println(testCompDis);
		 * */
	}
	
	public boolean isStudent() {
		Boolean isStudent = false;
		
		if(this.student == true) {
			isStudent = true;
		}
		
		return isStudent;
	}
	
	public int getAge() {
		return this.age;
	}
	
	public int computeDiscountPercent() {
		int discount = 0;
		
		if(this.student) {
			if ((10 <= this.age) && (this.age <= 20)) {
				discount = 50;
			}
		}
		return discount;
	}
}
