package dsa_w06;

import java.util.Arrays;

/**
 * @Q: Here is the quick sort code with 2 bug. Fix.
 * @A: Swap array needs to swap at array indexes.
 * @A: Not able to handle duplicates.
 */
public class ArraySort {

	public static void main(String[] args) {

		int[] list = {2, 1, 3, 6, 5, 4, 9, 2};
		System.out.println(Arrays.toString(list));

		ArraySort test = new ArraySort();
		test.quickSort(list);
		System.out.println(Arrays.toString(list));
	}

	public void quickSort(int[] list) {
		quickSort(list, 0, list.length - 1);
	}

	private void quickSort(int[] list, int head, int tail) {
		if (head < tail) {
			int pivot = list[head];
			int fromHead = head;
			int fromTail = tail;

			while (fromHead < fromTail) {
				// to handle duplicates, if dup is pivot
				while (fromHead < fromTail && list[fromTail] >= pivot) {
					fromTail--;
				}
				swap(list, fromHead, fromTail);

				// to handle duplicates, if dup is pivot
				while (fromHead < fromTail && list[fromHead] <= pivot) {
					fromHead++;
				}
				swap(list, fromHead, fromTail);
			}
			quickSort(list, head, fromHead - 1);
			quickSort(list, fromHead + 1, tail);
		}
	}
	
	// swap values places at index in array
	private void swap(int[] list, int a, int b) {
		int temp = list[a];
		list[a] = list[b];
		list[b] = temp;
	}
}
