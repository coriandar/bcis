package dsa_w05;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author coriandar
 */
public class DSA_Quiz5 {
	static String[] elements = new String[10];
	static int size = 5;

	public static void main(String[] args) {
		String[] data = {"a", "b", "c", "d", "e"};
		LinkedList list = new LinkedList(data);
//		list.printList(false);

		list.toDoublyLinkedList();
		list.printListByLinker();
//		guessNumber();
	}
	
	public static void guessNumber() {
		Scanner scan = new Scanner(System.in);
		int upper = 100;
		int lower = 1;
		int guess = 50;
		boolean firstGuess = true;

		while (true) {
			if (!firstGuess) guess = brain(upper, lower);
//			System.out.println(lower + " " + upper);
			System.out.println(guess);
			firstGuess = false;

			char key = scan.nextLine().toLowerCase().charAt(0);
			if ('l' == key) lower = guess + 1;
			else if ('h' == key) upper = guess - 1;
			else if ('y' == key) break;
		}
	}

	public static int brain(int upper, int lower) {
		Random randGuess = new Random();
		return randGuess.nextInt(upper - lower + 1) + lower;
	}
	
}
