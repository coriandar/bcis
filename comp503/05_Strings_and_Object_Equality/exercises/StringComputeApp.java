package exercises;

public class StringComputeApp {

	public static void main(String[] args)
	{
		StringCompute str = new StringCompute("helloeeee");
		
		System.out.print("countOccurances:");
		System.out.println(str.countOccurances('e'));
		
		System.out.print("hasOnlyDigits:");
		System.out.println(str.hasOnlyDigits());
		
		System.out.print("isPalindrome:");
		System.out.println(str.isPalindrome());
		
		System.out.print("reverseString:");
		System.out.println(str.reverseString());
		
		System.out.print("removeChar:");
		System.out.println(str.removeChar('e'));
		
		System.out.print("duplicate:");
		str.duplicate("hello");
		System.out.println(str);
	}
}
