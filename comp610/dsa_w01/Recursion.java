
package dsa_w01;

import java.util.Arrays;

/**
 *
 * @author coriandar
 */
public class Recursion {

	public static void main(String[] args)
	{
		diamond(6, 6);
		int[] test = new int[10];
		addToArray(5, test, test.length);
		addToArray(7, test, test.length);
		addToArray(2, test, test.length);
		addToArray(1, test, test.length);
		addToArray(9, test, test.length);
		System.out.println(Arrays.toString(test));
	}

	/**
	 * 1) Complete method with recursion, which prints diamond pattern
	 * 1,2,3,4,5,6 | 6,5,4,3,2,1
	 *
	 */
	public static void repeatlyPrint(int amount, String pattern) {
		if (amount > 0) { // base case
			System.out.print(pattern); // print pattern once
			repeatlyPrint(amount - 1, pattern); // recusively call
		}
	}

	public static void diamond(int height, int row) {
		repeatlyPrint((height - row == 0) ? --row : row, " ");
		repeatlyPrint(height - row, "* ");
		System.out.println();

		if (row > 0) {
			diamond(height, row - 1);
		}

		repeatlyPrint(row, " ");
		repeatlyPrint(height - row, "* ");
		System.out.println();
	}

	/**
	 * 2) Complete inserToArray() method, which adds a number to an int array in
	 * sorted order.
	 */
	public static void addToArray(int number, int[] list, int size) {
		int index = 0;
		// finds the index to insert into
		for (; number > list[index] && list[index] > 0; index++);

		// shift array up
		for (int currentIndex = size - 1; currentIndex > index; currentIndex--) {
			// if list[8] == 9, then list[9] = 9
			list[currentIndex] = list[currentIndex - 1];
		}

		list[index] = number;
	}
	
	/**
	 * 3) Code converts decimal to binary. Rewrite with recursion
	 *
	 */
//	public void decToBin(int number) {
//		String binary = "";
//		while (number != 0) {
//			binary = (number &1) + binary;
//			number >>= 1;
//		}
//	}
}
