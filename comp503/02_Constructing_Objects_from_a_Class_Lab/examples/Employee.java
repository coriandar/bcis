package examples;

/**
 * 
 * This class specifies the data to store in Employee objects
 * 
 * 
 * */
public class Employee {
	
	byte age;
	double weight;
	boolean retired;
	char gender;
	Address address;
	
/**
 * This main method makes an object instance of the Employee class and an object instance of type Address
 * 
 * 
 * */
	public static void main(String[] args) 
	{
		
		Employee homer = new Employee();
		homer.age = 55;
		homer.weight=100.84;
		homer.retired=false;
		homer.gender='M';
		
		Address addr = new Address();		
		addr.name = "Homer Simpson";
		addr.streetNumber = 123;
		addr.suburb = "?";
		addr.city = "Auckland";
		addr.postCode="0001";
		homer.address = addr;
		

	}

	
	
	
}
