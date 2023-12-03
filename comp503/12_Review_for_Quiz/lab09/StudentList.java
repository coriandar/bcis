package lab09;

import java.util.*;

public class StudentList {
	private ArrayList<Student> students;
	
	public static void main(String[] args)
	{
		StudentList t = new StudentList();
		t.addStudent(new Student("Bob", "211"));
		t.addStudent(new Student("Linda", "212"));
		t.addStudent(new Student("Teddy", "213"));
		
		System.out.println(t);
	}

	public StudentList () {
		this.students = new ArrayList<>();
	}
	
	public void addStudent(Student student) {
		this.students.add(student);
	}
	
	public String toString() {
		StringBuilder output = new StringBuilder();
		
		for (Student stu : this.students) {
			output.append(stu + "\n");
		}
		
		return output.toString();
	}
	
	public boolean contains(Student student) {
		return this.students.contains(student);
	}
	
}
