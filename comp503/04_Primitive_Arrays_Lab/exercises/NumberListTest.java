package exercises;

public class NumberListTest {

	public static void main(String[] args)
	{
		NumberList numbers = new NumberList();
		System.out.print("Numbers in array: ");
		System.out.println(numbers);
		
		numbers = new NumberList(100);
		System.out.print("Numbers in array: ");
		System.out.println(numbers);
		
		System.out.print("Size of array: ");
		System.out.println(numbers.size());
		
		System.out.print("Min: ");
		System.out.println(numbers.min());
		
		System.out.print("Max: ");
		System.out.println(numbers.max());
		
		System.out.print("Average: ");
		System.out.println(numbers.average());
		
		System.out.print("Factor: ");
		numbers.scale(2);
		System.out.println(numbers);
		
		System.out.print("Absolute: ");
		numbers.absolute();
		System.out.println(numbers);
		System.out.println(numbers.sub(0, 2));
	}

}
