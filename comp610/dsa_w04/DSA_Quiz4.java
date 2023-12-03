package dsa_w04;

import java.util.Scanner;

/**
 *
 * @author coriandar
 */
public class DSA_Quiz4 {

	public static void main(String[] args) {
//        Stack<String> test = new Stack<>();
//        test.push("Hello");
//        System.out.println(test.isEmpty());
//        System.out.println(test.pop());
//        Scanner myScanner = new Scanner(System.in);
//        while(true) {
//            String input = myScanner.nextLine();
//            System.out.println(palindromeEvaluator(input));
//        }
		int size = 6;
		int head = 0;
		System.out.println(head++ % size);
		System.out.println(head);
		String input = "ELLe";
		System.out.println(palindromeEvaluator(input));
	}

	public static boolean palindromeEvaluator(String input) {
		// 19 lines
		/**
		 * 3. Complete this method. It returns true if input string is a
		 * palindrome.
		 */

		// push to stack, then pop and rebuild string
		Stack<Character> test = new Stack<>();
		for (int i = 0; i < input.length(); i++) {
			test.push(input.charAt(i));
		}
		StringBuilder output = new StringBuilder();

		while (!test.isEmpty()) {
			output.append(test.pop());
		}

		return input.equalsIgnoreCase(output.toString());
	}

	public static boolean palindromeSolution(String input) {
		Stack<Character> stack = new Stack<>();
		Queue<Character> queue = new Queue<>();

		char[] charArray = input.toLowerCase().toCharArray();
		boolean isPalindrome = true;

		for (int i = 0; i < charArray.length; i++) {
			queue.enqueue(charArray[i]);
			stack.push(charArray[i]);
		}

		for (int i = 0; i < charArray.length; i++) {
			isPalindrome = (queue.dequeue()).equals((stack.pop()))&& isPalindrome;
		}
		return queue.isEmpty() && stack.isEmpty() && isPalindrome;
	}
}
