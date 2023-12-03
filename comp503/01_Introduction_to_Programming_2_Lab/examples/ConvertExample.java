package examples;

public class ConvertExample {
	/*
	 * This class demonstrates three kinds of casting: by assignment, promotion and
	 * explicit.
	 **/
	public static void main(String[] args) {
		int x = 100;
		float y = x;
		System.out.println("Assignment");
		System.out.println(" int x = " + x);
		System.out.println("float y = x stores " + y);
		y = 10.7F;
		float z = y / x;
		System.out.println("Promotion");
		System.out.println(" int x = " + x);
		System.out.println("float y = " + y);
		System.out.println("float z = y/x stores " + z);
		x = (int) y;
		System.out.println("Casting 1");
		System.out.println("float y = " + y);
		System.out.println(" int x = (int) y stores " + x);
		int a = 3;
		z = (float) x / a;
		System.out.println("Casting 2");
		System.out.println("int a = " + a);
		System.out.println("float y = " + y);
		System.out.println("float z = (float) x/a stores " + z);
		System.out.println();
	}
}