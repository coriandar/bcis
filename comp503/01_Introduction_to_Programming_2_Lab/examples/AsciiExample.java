package examples;

public class AsciiExample {
	/**
	 * This class demonstrates casting char data types to integers to obtain their
	 * decimal representation, e.g. their ascii value. We can also manipulate
	 * characters as if they were numbers using the standard arithmetic operations.
	 */
	public static void main(String[] args) {
		char letter = 'A';
		System.out.println(letter + " = " + (int) letter);
		letter += 1;
		System.out.println(letter + " = " + (int) letter);
		letter += 32;
		System.out.println(letter + " = " + (int) letter);
		for (char i = 'a'; i < 'z'; i++) {
			System.out.print(i);
		}
	}
}