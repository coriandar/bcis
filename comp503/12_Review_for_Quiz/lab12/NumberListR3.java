package lab12;

import java.util.*;

public class NumberListR3 {

	public static void main(String[] args)
	{
		NumberListR3 test = new NumberListR3();
		System.out.println(test.frequencies(new int[] {2,9,2,1,2,1,7,7,9,9,9,0}));
	}
	
	public String frequencies(int[] input) {
		HashMap<Integer, Integer> map = new HashMap <Integer, Integer>();
		
		for (int i = 0; i < input.length; i++) {
			if (map.containsKey(input[i])) {
				map.put(input[i], map.get(input[i]) + 1);
			}
			else {
				map.put(input[i], 1);
			}
		}
		
		String[] outArray = new String[map.size()];
		int k = 0;
		for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
			outArray[k] = entry.getKey().toString()+" has frequency "+entry.getValue();
			k++;
		}
		
		StringBuilder output = new StringBuilder();
		for (int i = outArray.length - 1 ; i >= 0 ; i--) {
			output.append(outArray[i]+"\n");
		}
		return output.toString();
	}
}
