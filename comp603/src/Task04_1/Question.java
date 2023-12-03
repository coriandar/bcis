package Task04_1;

import java.util.HashMap;

public class Question {
	private int left;
	private int right;

	private void genOperands(int max) {
		this.left = randNum(max);
		this.right = randNum(max);
	}

	public void genQAdd(int max, HashMap<String, Integer> questionSet) {
		genOperands(max);
		questionSet.put((left + " + " + right + " = ?"), (left + right));
	}

	public void genQMin(int max, HashMap<String, Integer> questionSet) {
		genOperands(max);
		questionSet.put((left + " - " + right + " = ?"), (left - right));
	}

	public void genQMul(int max, HashMap<String, Integer> questionSet) {
		genOperands(max);
		questionSet.put((left + " * " + right + " = ?"), (left * right));
	}

	public void genQDiv(int max, HashMap<String, Integer> questionSet) {
		genOperands(max);
		questionSet.put((left + " / " + right + " = ?"), (left / right));
	}

	public int randNum(int max) {
		return (int) Math.floor(Math.random() * max);
	}
}
