package lab12_R1;

import java.util.HashMap;
import java.util.Map;

public class NumberList {
	
	public static void main(String[] args)
	{
		NumberList t = new NumberList();
		System.out.println(t.underscore("abcdefg", 2));
		System.out.println(t.frequencies(new int[] {2,9,2,1,2,1,7,7,9,9,9,0}));
	}
	
	public String frequencies(int[] input) {
		HashMap<Integer, Integer> map = new HashMap<>();
		
		for (int i = 0; i < input.length; i++) {
			if (map.containsKey(input[i])) {
				map.put(input[i], map.get(input[i]) + 1);
			}
			else {
				map.put(input[i], 1);
			}
		}
		
		int k = map.size() - 1;
		String[] toArray = new String[k + 1];
		for (Map.Entry<Integer,Integer> kv : map.entrySet()) {
			toArray[k] = kv.getKey() +" as frequency "+kv.getValue()+"\n";
			k--;
		}
		
		StringBuilder output = new StringBuilder();
		for (int i = 0; i < map.size(); i++) {
			output.append(toArray[i]);
		}
		return output.toString();
	}

	public char[] underscore(String input, int p) {
		char[] output = new char[input.length() * (p + 1)];
		
		//i is index of input
		//i+k is index of char array after adding underscores
		for (int i = 0, k = 0; i < input.length(); i++, k += p) {
			output[i + k] = input.charAt(i);
			
			//i+k+j+1 is index to start adding underscores
			for (int j = 0; j < p; j++) {
				output[i + k + j + 1] = '_';
			}
		}
		return output;
	}
}
