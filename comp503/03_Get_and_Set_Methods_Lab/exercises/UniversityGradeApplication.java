package exercises;

public class UniversityGradeApplication {

	public static void main(String[] args)
	{
		Grade p2 = new Grade(75);
		p2.setPercentage(95);
		
		System.out.println(p2.getPercentage());
	}
}
