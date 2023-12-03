package exercises;
import java.util.Scanner;

public class NitFlux {
	String email;
	int monthsOfSubscription;
	int costOfSubscription;
	
	public NitFlux(String email, int monthsOfSubscription, int costOfSubscription) {
		this.email = email;
		this.monthsOfSubscription = monthsOfSubscription;
		this.costOfSubscription = costOfSubscription;
	}
	
	public NitFlux() {
		this.email = "UNKNOWN";
		this.monthsOfSubscription = 0;
		this.costOfSubscription = 0;
	}
	
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Email: ");
		String email = scan.nextLine();
		
		System.out.print("Months: ");
		int monthsOfSubscription = Integer.valueOf(scan.nextLine());
		
		System.out.print("Fee: ");
		int costOfSubscription = scan.nextInt();
		
		NitFlux account1 = new NitFlux(email, monthsOfSubscription, costOfSubscription);
		System.out.println(account1.computeCustomerPay());

		NitFlux account2 = new NitFlux("account2@gmail.com", 3, 10);
		System.out.println(account2.computeCustomerPay());
		
		NitFlux account3 = new NitFlux();
		System.out.println(account3.computeCustomerPay());
	}
	
	public int computeCustomerPay() {
		int total = 0;
		total = (monthsOfSubscription * costOfSubscription);
		
		return total;
	}
	
}
