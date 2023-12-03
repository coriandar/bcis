package noiseremoving;

/**
 * @question 2.2 NoiseRemoving
 *
 * @Q1: Is quick sort the best way of finding the median? Why?
 * @A1: No. Quick sort best case is O(n log n). The median is only one i-th(this case 4) value, so
 *      as seen in the solution for selection problem, it is possible achieve O(n).
 * 
 * @Q2: What is another good way of finding median? Why?
 * @A2: Another way would be merge sort as it is also O(n log n), however the space
 * 		complexity of mergeSort is O(n) which is worse than quickSort O(log n).
 */
public class CollectionSort <E extends Comparable> {

	private E[] array;

	/**
	 * Constructor, default
	 */
	public CollectionSort() {
        this.array = null;
    }

	/**
	 * Takes a reference of an array and passes reference to the "array" field.
	 * 
	 * @param arrayToSort, array to be sorted with quickSort
	 */
	public void setArray(E[] arrayToSort) {
		this.array = arrayToSort;
	}

	/**
	 * Generic method to sort an array using the quicksort algorithm.
	 * Method will select a pivot to partition the array and then quicksort to
	 * the left of the partition and then quicksort to the right of partition.
	 * 
	 * @param array to be sorted.
	 * @param start, starting index
	 * @param end, ending index
	 */
	public void quickSort() { 
        if (this.array != null) {
            quickSort(array, 0, array.length - 1); 
        }
    }
	private void quickSort(E[] array, int start, int end) {
		if (start < end) {
			int pivotIndex = pivot(array, start, end); // get index of partition
			quickSort(array, start, pivotIndex - 1); // sort before partition
			quickSort(array, pivotIndex + 1, end); // sort after partition
		}
	}

	/**
	 * Method to rearrange elements in the array so that:
	 * - all values less than or equal to pivot moved to left of pivot.
	 * - all values greater than or equal to pivot moved to right of pivot.
	 * 
	 * Pivot is randomized to help avoid O(n^2) in edge case when array is
	 * already sorted as will not be constantly picking the smallest or largest
	 * element each time.
	 * 
	 * @param array to be sorted.
	 * @param start, starting index
	 * @param end, ending index
	 * @return index of pivot element
	 */
	private int pivot(E[] array, int start, int end) {
		int randPivotIndex = (int)(Math.random() * (end - start)) + start; // get random pivot
		swap(array, randPivotIndex, start); // swap ele at randPivotIndex with ele at start

		E pivot = array[start]; // pivot, element to compareTo
		int swapIndex = start; // tracks where to swap pivot to at end

		for (int i = start + 1; i <= end; i++) { //  iterate through array from 2nd element to end
			if (array[i].compareTo(pivot) <= 0) { // compare each element to pivot, invert < to invert order
				swapIndex++;
				swap(array, swapIndex, i); // swap ele at i with ele at swapIndex, to left side of array
			}
		}
		swap(array, start, swapIndex); // put pivot element between left and right parts
		return swapIndex;
	}

	/**
	 * Takes in reference to array, and swaps the elements at given indices.
	 * 
	 * @param array to be sorted.
	 * @param a, index of first element to be swapped
	 * @param b, index of second element to be swapped
	 */
	private void swap(E[] array, int a, int b) {
		E temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}
}
