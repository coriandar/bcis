
package dsa_w02;

import java.util.Arrays;

/**
 *
 * @author coriandar
 */
public class Bug {

	public static void main(String[] args) {
		int[] list = new int[]{1, 2, 3, 4, 5};
		System.out.println(Arrays.toString(list));
		System.out.println(findInArray(list, 1));
		System.out.println(findInArray(list, 2));
		System.out.println(findInArray(list, 3));
		System.out.println(findInArray(list, 4));
		System.out.println(findInArray(list, 5));
		System.out.println(findInArray(list, 0));
	}

	private static int findInArray(int[] list, int target) {
		int index = 0;

		/** Original */
//		 for (; list[index] != target && index < list.length; index++);

		// have it check if index < list.length
		// then list[index] won't evaluate
		for (; index < list.length && list[index] != target; index++);

		if (index < list.length) {
			return index;
		}

		return -1; // not found
	}

}
