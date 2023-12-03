package Task04_1;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Game {
	private HashMap<String, Integer> questionSet;
	private Stack<String> questionStack;
	private int gameScore;

	public Game(int numQ) {
		this.questionSet = genSet(numQ, 10);
		this.questionStack = createStack();
		this.gameScore = 0;
	}

	public void start(Scanner scan) {
		checkAnswer(askQuestion(), parseInput(scan));
	}

	public int getGameScore() {
		return this.gameScore;
	}

	public void printAnswerKey() {
		StringBuilder output = new StringBuilder();
		for (Map.Entry<String, Integer> e : questionSet.entrySet()) {
			output.append("Q: " + e.getKey() + " | A: " + e.getValue() + "\n");
		}
		System.out.println(output.toString());
	}

	public boolean stackIsEmpty() {
		return questionStack.isEmpty();
	}

	private int parseInput(Scanner scan) {
		do {
			try {
				String raw = scan.nextLine();
				if (raw.trim().equalsIgnoreCase("x")) { // trim removes whitespace
					System.out.println("Game score: " + this.gameScore + "\n");
					System.exit(0);// strongest way exit program
				}
				return Integer.parseInt(raw);

			} catch (NumberFormatException e) {
				System.out.println("Enter a number (or x to quit)");
			}
		} while (true);
	}

	private String askQuestion() {
		String q = questionStack.pop();
		System.out.println(q);
		return q;
	}

	private void checkAnswer(String key, int input) {
		if (input == questionSet.get(key)) {
			this.gameScore += 10;
			System.out.println("Correct, score: " + this.gameScore + "\n");
		} else {
			this.gameScore -= 10;
			System.out.println("Incorrect, score: " + this.gameScore + "\n");
		}
	}

	private HashMap<String, Integer> genSet(int numQuestion, int max) {
		Question q = new Question();
		HashMap<String, Integer> qSet = new HashMap<>();

		while (qSet.size() < numQuestion) {
			int operand = q.randNum(3);
			if (operand == 0) q.genQAdd(max, qSet);
			if (operand == 1) q.genQMin(max, qSet);
			if (operand == 2) q.genQMul(max, qSet);
			if (operand == 3) q.genQDiv(max, qSet);
		}
		return qSet;
	}

	private Stack createStack() {
		Stack output = new Stack();
		for (Map.Entry<String, Integer> e : questionSet.entrySet()) {
			output.push(e.getKey());
		}
		return output;
	}
}
