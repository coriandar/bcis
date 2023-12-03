package examples;

public class Strings {

	public static void main(String[] args) 
	{
		String greeting = "Hello Ken! ";		
		String message = greeting+" How are you?";
		
		System.out.println(message);
		System.out.println(message.length());
		System.out.println(message.indexOf('a'));
		System.out.println(message.charAt(9));
		System.out.println(message.toLowerCase());
	}

}
