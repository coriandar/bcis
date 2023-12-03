package lab12;

import java.util.Arrays;
import java.util.HashMap;

public class NumberList {

	public static void main(String[] args)
	{
		System.out.println(underScoreToChar("tochar", 2));
		System.out.println(underScoreNull("charisnulll", 2));
		System.out.println(underScore("charproper", 3));
		System.out.println(frequenciesFirst(new int[] {5,1,2,3,1,1,2,4}));
		System.out.println(frequenciesBetter(new int[] {5,1,8,8,8,1,2,4,9,9,9}));
		System.out.println(frequenciesHash(new int[] {5,1,2,7,7,1,7,7,9,9,9}));
		System.out.println(frequenciesHashII(new int[] {5,1,2,3,1,1,2,4,9,9,9}));
	}
	
	public static String frequenciesHashII(int[] input) {
		int[] freq = new int[input.length];
        HashMap<Integer, Integer> map = new HashMap<Integer,Integer>();
        
        for (int i = 0; i < input.length; i++) {
        	if(map.containsKey(input[i])) {
        		map.put(input[i], map.get(input[i])+1);
        	}
        	else {
        		map.put(input[i], 1);
        	}
        }
        
        StringBuilder output = new StringBuilder();
        for (int k = 10; k > 0; k--) {
        	if(map.containsKey(k)) {
        		output.append(k+" has freqeuncy "+map.get(k)+"\n");
        	}
        }
		return output.toString();
	}
	
	public static String frequenciesHash(int[] unsorted) {
		int[] input = unsorted;
		int[] freq = new int[input.length];

		//key = value value = freq
		//map.get uses key i.e. 9 and return the freq
        HashMap<Integer, Integer> map = new HashMap<Integer,Integer>();
        for (int i = 0; i < input.length; i++) {
        	if(map.containsKey(input[i])) {
        		//stores the key, stores value + 1 i.e. null + 1
        		map.put(input[i], map.get(input[i])+1);
        	}
        	else {
        		//else add key to map, value of 1
        		map.put(input[i], 1);
        	}
        }
        
        StringBuilder output = new StringBuilder();
        //prints in reverse order
        for (int k = 10; k > 0; k--) {
        	if(map.containsKey(k)) {
        		output.append(k+" has freqeuncy "+map.get(k)+"\n");
        	}
        }
		return output.toString();
	}
	
	public static String frequenciesBetter(int[] unsorted) {
		int[] input = descSort(unsorted);
		int[] freq = new int[input.length];
		int dup = -1;

		for (int i = 0; i < input.length; i++) {
			//resets to 0 each iteration
			int count = 0;
			
			//compares i all numbers ahead within array
			for (int j = i + 1; j < input.length; j++) {
				if (input[i] == input[j]) {
					//if match add 1 to count
					count++;
					//marks as dup
					freq[j] = dup;
				}
			}
			if (freq[i] != dup) {
				//if not dup adds itself to count
				freq[i] = count + 1;
			}
		}

		StringBuilder output = new StringBuilder();
		for (int i = 0; i < freq.length; i++) {
			if (freq[i] != dup) {
				output.append(input[i]+" has frequency "+freq[i] + "\n");
			}
		}
		return output.toString();
	}
	
	public static String frequenciesFirst(int[] unsorted) {
		int[] input = descSort(unsorted);
		int[] freq = new int[input.length];

		for (int i = 0; i < input.length; i++) {
			int count = 0;
			//2 arrays columns parallel
			//loops, evaluates if input[0] == input[i+1] 
			//if ==, val at freq[j] = -1
			for (int j = i + 1; j < input.length; j++) {
				if (input[i] == input[j]) {
					count++;
					freq[j] = -1;
				}
			}
			//after looping
			if (freq[i] != -1) {
				freq[i] = count + 1;
			}
		}

		StringBuilder output = new StringBuilder();
		for (int i = 0; i < freq.length; i++) {
			if (freq[i] != -1) {
				output.append(input[i]);
				output.append(" has frequency ");
				output.append(freq[i] + "\n");
			}
		}

		return output.toString();
	}
	
	public static int[] descSort(int[] input) {
		Arrays.sort(input);
		int[] descSort = new int[input.length];
		for (int i = 0, k = input.length - 1; i < input.length; i++, k--) {
			descSort [i] = input[k];
		}
		return descSort;
	}
	
	public static char[] underScore(String input, int p) {
		char[] output = new char[input.length() * (p + 1)];
		for (int i = 0, k = 0; i < input.length(); i++, k += p) {
			output[i + k] = input.charAt(i);

			for (int j = 0; j < p; j++) {
				output[i + k + j + 1] = '_';
			}
		}
		return output;
	}

	public static char[] underScoreNull(String input, int p) {
		char[] output = new char[input.length() * (p + 1)];

		for (int i = 0, k = 0; i < input.length(); i++, k += p) {
			output[i + k] = input.charAt(i);
		}

		for (int t = 0; t < output.length; t++) {
			if (output[t] == '\0') {
				output[t] = '_';
			}
		}
		return output;
	}

	public static char[] underScoreToChar(String input, int p) {
		String lol = "";

		for (int i = 0; i < input.length(); i++) {
			lol += input.charAt(i);

			for (int k = 0; k < p; k++) {
				lol += "_";
			}
		}
		return lol.toCharArray();
	}
}
