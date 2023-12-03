package exercises;
import java.util.Scanner;

public class Student {
	String firstName;
	String lastName;
	String studentID;
	
	//constructor default values
	public Student() {
		this.firstName = "UNKNOWN";
		this.lastName = "UNKNOWN";
		this.studentID = "?";
	}
	
	//constructor name
	public Student(String firstName, String lastName) {
		this.firstName = firstName;
		this.lastName = lastName;
		this.studentID = "?";
	}
	
	
	//constructor all
	public Student(String firstName, String lastName, String studentID) {
		this.firstName = firstName;
		this.lastName = lastName;
		this.studentID = studentID;
	}
	
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);	
		System.out.println("Please enter student's first name:");
		String firstName = scan.nextLine();
		
		System.out.println("Please enter student's last name:");
		String lastName = scan.nextLine();
		
		System.out.println("Please enter student's ID:");
		String studentID = scan.nextLine();
		
		System.out.println("Calling 3 parameter constructor:");
		Student studentPara3 = new Student(firstName, lastName, studentID);
		System.out.print("Student's first name: ");
		System.out.print(studentPara3.firstName);
		System.out.print(" Last name: ");
		System.out.print(studentPara3.lastName);
		System.out.print(" ID: ");
		System.out.println(studentPara3.studentID);
		System.out.println();
		
		System.out.println("Calling 2 parameter constructor:");
		Student studentPara2 = new Student(firstName, lastName);
		System.out.print("Student's first name: ");
		System.out.print(studentPara2.firstName);
		System.out.print(" Last name: ");
		System.out.print(studentPara2.lastName);
		System.out.print(" ID: ");
		System.out.println(studentPara2.studentID);
		System.out.println();
		
		System.out.println("Calling 0 parameter constructor:");
		Student studentPara0 = new Student();
		System.out.print("Student's first name: ");
		System.out.print(studentPara0.firstName);
		System.out.print(" Last name: ");
		System.out.print(studentPara0.lastName);
		System.out.print(" ID: ");
		System.out.println(studentPara0.studentID);
	}
}
