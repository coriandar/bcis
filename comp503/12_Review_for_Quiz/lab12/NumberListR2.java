package lab12;

import java.util.*;

public class NumberListR2 {

	public static void main(String[] args)
	{
		NumberListR2 test = new NumberListR2();
		System.out.println(test.frequencies(new int[] {2,9,2,1,2,1,7,7,9,9,9,0}));
	}

	public String frequencies(int[] input) {
		HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
		
		for (int i = 0; i < input.length; i++) {
			if (map.containsKey(input[i])) {
				map.put(input[i], map.get(input[i]) + 1);
			}
			else {
				map.put(input[i], 1);
			}
		}

		List<Map.Entry<Integer, Integer>> list = 
				new LinkedList <Map.Entry<Integer, Integer>>(map.entrySet());
		
		// asc freq
//		Collections.sort(list, new Comparator<Map.Entry<Integer, Integer>> () {
//			public int compare(Map.Entry<Integer, Integer> o1,
//								Map.Entry<Integer, Integer> o2)
//			{
//				return (o1.getValue()).compareTo(o2.getValue());
//			}
//		});
		
		// desc freq
		Collections.sort(list, new Comparator<Map.Entry<Integer, Integer>> () {
			public int compare(Map.Entry<Integer, Integer> o1,
								Map.Entry<Integer, Integer> o2)
			{
				return (o2.getValue()).compareTo(o1.getValue());
			}
		});
		
		HashMap<Integer, Integer> sortedMap = new LinkedHashMap<Integer, Integer>();
		for (Map.Entry<Integer, Integer> kv : list) {
			sortedMap.put(kv.getKey(), kv.getValue());
		}

		StringBuilder output = new StringBuilder();
		for (Map.Entry<Integer, Integer> entry : sortedMap.entrySet()) {
			output.append(entry.getKey() + " has frequency " + entry.getValue() + "\n");
		}
		return output.toString();
	}
}
