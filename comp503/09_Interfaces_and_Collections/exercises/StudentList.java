package exercises;

import java.util.ArrayList;

public class StudentList {
	private ArrayList<Student> students;
	
	public StudentList(int listSize) {
		this.students = new ArrayList<Student>(listSize);
	}
	
	public String toString() {
		StringBuilder output = new StringBuilder();
		for(Student s : students) {
			output.append(s + "\n");
		}
		return output.toString();
	}
	
	public void addStudent(Student student) {
		this.students.add(student);
	}
	
	public boolean contains(Student find) {
		return students.contains(find);
	}
}
