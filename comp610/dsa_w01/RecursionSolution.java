
package dsa_w01;

import java.util.Arrays;

/**
 *
 * @author coriandar
 */
public class RecursionSolution {

	public static void main(String[] args) {
		diamond(6, 6);

		int[] test = new int[10];
		addToArray(9, test, test.length - 1);
		System.out.println(Arrays.toString(test));

		System.out.println(intToBinary(100));
			
	}

	public static void repeatlyPrint(int amount, String pattern) {
		if (amount > 0) { // base case
			System.out.print(pattern); // print pattern once
			repeatlyPrint(amount - 1, pattern); // recusively call
		}
	}

	public static void diamond(int height, int row) {
		repeatlyPrint(row - 1, " ");
		repeatlyPrint(height - row, "* ");
		System.out.println();

		if (row > 1) {
			diamond(height, row - 1);
		}

		repeatlyPrint(row - 1, " ");
		repeatlyPrint(height - row, "* ");
		System.out.println();
	}

	public static void addToArray(int number, int[] list, int size) {
		int index = 0;
		for (; index < size && list[index] < number; index++);
		for (int i = size - 1; i >= index; i--) {
			list[i + 1] = list[i];
		}
		list[index] = number;
	}

	public static String intToBinary(int n) {
		String binary = "";
		if (n != 0) {
			return intToBinary(n >> 1) + (n & 1);
		}
		return binary;
	}

}
