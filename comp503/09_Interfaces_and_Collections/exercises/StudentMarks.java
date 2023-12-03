package exercises;

import java.util.ArrayList;

public class StudentMarks implements Comparable<StudentMarks>{
	private String studentName;
	private ArrayList<Double> studentMarks;
	
	/**
	 * Constructor
	 * */
	public StudentMarks(String name) {
		setStudentName(name);
		this.studentMarks = new ArrayList<Double>();
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		StringBuilder output = new StringBuilder(getStudentName()+" ");
		for(int i = 0; i < studentMarks.size(); i++) {
			output.append(studentMarks.get(i)+" ");
		}
		output.append("\n");
		return output.toString();
	}
	
	/**
	 * compareTo, need this to use Collection sort, compares objects
	 * */
	@Override
	public int compareTo(StudentMarks o) {
		return this.average().compareTo(o.average());
	}
	
	/**
	 * Methods
	 * */
	public void add(Double mark) {
		this.studentMarks.add(mark);
	}
	
	public void add(Double mark1, Double mark2, Double mark3) {
		this.studentMarks.add(mark1);
		this.studentMarks.add(mark2);
		this.studentMarks.add(mark3);
	}
	
	
	public int sum() {
		int sum = 0;
		for(int i = 0; i < studentMarks.size(); i++) {
			sum += studentMarks.get(i);
		}
		return sum;
	}
	
	public Double average() {
		return this.sum() / (double)studentMarks.size();
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getStudentName() {
		return studentName;
	}

	public void setStudentName(String studentName) {
		this.studentName = studentName;
	}

	public ArrayList<Double> getStudentMarks() {
		return studentMarks;
	}
}
