package exercises;

public class StudentListApp {
	public static void main(String[] args)
	{
		StudentList students = new StudentList(5);
		Student bob = new Student("Bob", "123");
		Student linda = new Student("Linda", "123");
		Student gene = new Student("Gene", "123");
		Student tina = new Student("Tina", "123");
		Student louise = new Student("Louise", "123");
		
		students.addStudent(bob);
		students.addStudent(linda);
		students.addStudent(gene);
		students.addStudent(tina);
		students.addStudent(louise);
		
		System.out.println(students);
		System.out.println(students.contains(bob));
	}
}