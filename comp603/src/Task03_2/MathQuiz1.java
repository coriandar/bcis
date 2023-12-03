package Task03_2;

import java.util.Scanner;

public class MathQuiz1 {

	public static void main(String[] args) {
		// keep out of while loop, makes new one each run
		Scanner scan = new Scanner(System.in);
		MathQuestion test = new MathQuestion();

		do {
			test.startQuiz(scan);
		} while (true);
	}
}
