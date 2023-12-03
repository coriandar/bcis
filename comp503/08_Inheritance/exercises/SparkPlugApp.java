package exercises;

public class SparkPlugApp {
	public static void main(String[] args)
	{
		Standard[] plans = new Standard[3];
		plans[0] = new Standard(1000, 1000);
		plans[1] = new DataMobile(1000, 1000, 1000);
		plans[2] = new DataHeavy(1000, 1000, 1000);
		
		for(Standard plan : plans) {
			plan.text(10);
			plan.talk(10);
		}
		
		if(plans[1] instanceof DataMobile) {
			DataMobile plan = (DataMobile) plans[1];
			plan.transfer(10);
		}

		if(plans[2] instanceof DataHeavy) {
			//Same as above
			((DataHeavy) plans[2]).transfer(1010);
		}
		
		for(Standard plan : plans) {
			System.out.println(plan+" $"+plan.billing());
		}
	}
}
