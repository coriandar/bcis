package examples;

public class EmployeePaymentsTest {

	public static void main(String[] args) 
	{
		Employee[] employees = new Employee[5];

		employees[0] = new Employee("Kat","01");
		employees[1] = new Employee("Jim","02");
		employees[2] = new HourlyEmployee("Bob","03",10);		
		employees[3] = new HourlyEmployee("Pat","04",20);		
		employees[4] = new BonusEmployee("Jack","05",75);

		for(Employee e : employees)
		{
			System.out.println(e.getName()+" is paid $"+e.pay());
		}		
	}
}
