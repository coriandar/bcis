package Task10_1;

import java.util.Arrays;

public class ArrayTest {

    public static void main(String args[]) {
        ArrayTest at = new ArrayTest();
		// at.find(int index, int[] array)
        double i = at.find(0, new int[]{1, 4, 2, 5, 7, 9});
        System.out.println(i);
    }
	// Each CIRCLE represents one or more procedural statements, a decisiona condition, or the end of a decision (end if)

	// The ARROWS on flow graph represent flow of control.

    //index 0: average, 1: minimum, 2:maximum
    public double find(int index, int[] intArray) {
		// [01]
        if (index < 0) {
            throw new IllegalArgumentException("index should be greater than or equal to 0");
        }
		// [02]
        if (intArray == null || intArray.length < 2) {
            throw new IllegalArgumentException("intArray cannot be null and the length of the array must be no less than 2");
        }

		// [03]
        int sum = 0;
        int count = 0;
        double result = 0;

		// [04]
        Arrays.sort(intArray);

		// [05]
        if (index == 0) {
			// [06]
            for (int i : intArray) {
				// [07]
                sum += i;
				// [08]
                count++;
            }
			// [09]
            if (count != 0) result = 1.0 * sum / count;
			// [10]
			else result = sum / count;
        } 

		// [11]
		else if (index == 1) result = intArray[0];
		// [12]
		else if (index == 2) result = intArray[intArray.length - 1];
		// [13]
        return result;

		// [14] END IF

		/**
		 * Path 1: 01-14
		 * Path 2: 01-02-14
		 * Path 3: 01-02-03-04-11-13-14
		 * Path 4: 01-02-03-04-12-13-14
		 * Path 5: 01-02-03-04-05-06-07-08-09-13-14
		 * Path 6: 01-02-03-04-05-06-07-08-10-13-14
		 */
    }
}
