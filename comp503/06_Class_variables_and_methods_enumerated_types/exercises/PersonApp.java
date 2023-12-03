package exercises;

public class PersonApp {
	public static void main(String[] args)
	{
		Person human1 = new Person("Human1", Role.STUDENT);
		Person human2 = new Person("Human2", Role.STUDENT);
		
		System.out.println(human1);
		System.out.println(human2);
		
		System.out.print("Roles are the same? ");
		System.out.println(human1.equals(human2));
	
	}
}
