package examples;


public class EmployeeProgram {
	public static void main(String args[]) {
		Employee employee;
		employee = new Employee();
			
		employee.age = 50;
		employee.weight = 200;
		employee.retired = false;
		employee.gender = 'M';		
		employee.address = new Address();
		
		employee.address.name = "Home Simpson";
		employee.address.streetNumber = 742;
		employee.address.streetName = "Evergreen Terrace";
		employee.address.suburb = "";
		employee.address.city = "Springfield";
		employee.address.postCode = "01101";
	}
}