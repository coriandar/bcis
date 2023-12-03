package lab02;

public class Nitflux {
	private String email;
	private int subLen;
	private int costCents;

	public static void main(String[] args)
	{
		Nitflux user = new Nitflux("@gmail", 10, 9999);
		System.out.println(user.convertCents(user.computeCustomerPay()));
	}
	
	public Nitflux (String email, int subLen, int costCents) {
		this.email = email;
		this.subLen = subLen;
		this.costCents = costCents;
	}
	
	public String convertCents(int costCents) {
		int dollars = costCents / 100;
		int cents = costCents % 100;
		
		
		String output = "$"+dollars+"."+cents;
		return output;
	}
	
	public int computeCustomerPay() {
		return this.subLen * this.costCents;
	}
}
