package lab12_R1;

import java.util.Arrays;
import java.util.HashMap;

public class TwoSumR1 {

	public static void main(String[] args)
	{
		System.out.println(Arrays.toString(new TwoSumR1().twoSum(new int[] {2,7,11,15}, 9)));
	}
	
    public int[] twoSum(int[] nums, int target) {
    	HashMap<Integer, Integer> map = new HashMap<>();

    	for (int i = 0; i < nums.length; i++) {
    		if (map.containsKey(target - nums[i])) {
    			return new int[] {map.get(target - nums[i]), i};
    		}
    		map.put(nums[i], i);
    	}
    	throw new IllegalArgumentException();
    }
}

