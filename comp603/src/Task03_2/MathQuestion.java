package Task03_2;

import java.util.Scanner;

public class MathQuestion {

	public int playerScore;

	public void startQuiz(Scanner scan) {

		checkAnswer(genQuestion(), parseInput(scan));
	}

	public int genQuestion() {
		int operand = randNum(3);
		int left = randNum(10);
		int right = randNum(10);
		int correct = 0;

		if (operand == 0) {
			correct = left + right;
			System.out.println(left + " + " + right + " = ?");
		} else if (operand == 1) {
			correct = left - right;
			System.out.println(left + " - " + right + " = ?");
		} else if (operand == 2) {
			correct = left * right;
			System.out.println(left + " * " + right + " = ?");
		} else if (operand == 3) {
			correct = left / right;
			System.out.println(left + " / " + right + " = ?");
		}
		return correct;
	}

	public int parseInput(Scanner scan) {
		do {
			try {
				String raw = scan.nextLine();
//				if (raw.toLowerCase().charAt(0) == 'x') {
				if (raw.trim().equalsIgnoreCase("x")) { // trim removes whitespace
					System.out.println("Final score: " + this.playerScore + "\n");
					System.exit(0);// strongest way exit program
				}
				return Integer.parseInt(raw);

			} catch (NumberFormatException e) {
				System.out.println("Enter a number (or x to quit)");
			}
		} while (true);
	}

	public void checkAnswer(int answer, int correct) {
		if (answer == correct) {
			this.playerScore += 10;
			System.out.println("Correct, score: " + this.playerScore + "\n");
		} else {
			this.playerScore -= 10;
			System.out.println("Incorrect, score: " + this.playerScore + "\n");
		}
	}

	public int randNum(int max) {
		return (int) Math.floor(Math.random() * max);
	}
}
