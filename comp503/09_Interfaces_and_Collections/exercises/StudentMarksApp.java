package exercises;

import java.util.ArrayList;
import java.util.Collections;

public class StudentMarksApp {
	public static void main(String[] args)
	{
		ArrayList<StudentMarks> studentMarks = new ArrayList<StudentMarks>();
		StudentMarks bob = new StudentMarks("Bob");
		StudentMarks linda = new StudentMarks("Linda");
		StudentMarks gene = new StudentMarks("Gene");
		StudentMarks louise = new StudentMarks("Louise");
		StudentMarks tina = new StudentMarks("Tina");
		
		bob.add(90.0, 50.0, 30.0);
		linda.add(30.0, 40.0, 20.0);
		gene.add(10.0, 11.0, 15.0);
		louise.add(50.0, 90.0, 54.0);
		tina.add(99.0, 20.0, 19.0);
		
		studentMarks.add(bob);
		studentMarks.add(linda);
		studentMarks.add(gene);
		studentMarks.add(louise);
		studentMarks.add(tina);
		
		Collections.sort(studentMarks);
		System.out.println(studentMarks);
		
		//Reverse order, sorts based on average of marks
		Collections.sort(studentMarks, Collections.reverseOrder());
		System.out.println(studentMarks);
	}
}
