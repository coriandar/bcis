package exercises;

import java.util.ArrayList;
import java.util.Arrays;

public class NumberListApp {

	public static void main(String[] args)
	{
		ArrayList<Integer> numArray = new ArrayList<Integer>(Arrays.asList(1,2,3,4,5));
		String numFromString = "1 2 3 4 5";
		
		NumberList numbers = new NumberList(numArray);
		NumberList numbers2 = new NumberList(numFromString);
		
		NumberList merged = numbers.merge(numbers2);
		System.out.println(merged);
		System.out.println(merged.sum());
		System.out.println(merged.average());
	}
}
