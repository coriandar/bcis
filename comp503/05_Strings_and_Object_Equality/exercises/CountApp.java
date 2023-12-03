package exercises;

public class CountApp {

	public static void main(String[] args) {
		Count testCount1 = new Count();
		testCount1.succ();
		testCount1.succ();
		testCount1.succ();
		System.out.println("testCount1:"+testCount1);
		
		Count testCount2 = new Count();
		testCount2.succ();
		testCount2.succ();
		System.out.println("testCount2:"+testCount2);
		testCount1.add(testCount2);

		System.out.println(testCount1+"-"+testCount2);
		testCount1.subtract(testCount2);
		System.out.println("testCount1:"+testCount1);
	}

}
