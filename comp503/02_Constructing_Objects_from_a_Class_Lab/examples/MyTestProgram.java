package examples;

public class MyTestProgram {

	public static void main(String[] args) {
		Address addr;
		addr = new Address();
		addr.name = "Max Power";
		addr.streetNumber = 123;
		addr.streetName = "Maple St.";
		addr.suburb = "Birkenhead";
		addr.city = "Auckland";
		addr.postCode = "0626";
		System.out.print(addr.name + " lives at: ");
		System.out.println(addr.streetNumber + " " + addr.streetName);
		System.out.println(addr);
	}
}
