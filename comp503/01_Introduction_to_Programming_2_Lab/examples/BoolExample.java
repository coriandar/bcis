package examples;

public class BoolExample {
	/**
	 * This class demonstrates the boolean data type and the standard operations:
	 * and or not
	 */
	public static void main(String[] args) {
		boolean open = false;
		boolean finished = true;
		if (!open && finished) {
			System.out.println("Not open, but finished");
		}
		if (open || finished) {
			System.out.println("Ready!");
		}
		if (!open) {
			System.out.println("Sorry, we're closed!");
		} else {
			System.out.println("Yes, we're open!");
		}
	}
}
