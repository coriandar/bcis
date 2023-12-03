package lab12_R1;

import java.util.Arrays;
import java.util.HashMap;

public class TwoSum {
	public static void main(String[] args)
	{
		TwoSum test = new TwoSum();
		int[] output = test.twoSum(new int[] {2,7,11,15}, 9);
		System.out.println(Arrays.toString(output));
	}
   
	public int[] twoSum(int[] nums, int target) {
		HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
		int[] output = new int[2];
		
		//num[i] is the key, value is index
		for (int i = 0; i < nums.length; i++) {
			//if map contain differnce
			if (map.containsKey(target - nums[i])) {
				//dif(key), get value(index)
				output[0] = map.get(target - nums[i]);
				//index of nums
				output[1] = i;
			}
			//add to map K:V nums[i], index
			map.put(nums[i], i);
		}
		return output;
	}
}
