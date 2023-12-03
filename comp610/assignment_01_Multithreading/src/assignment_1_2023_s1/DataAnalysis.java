package assignment_1_2023_s1;

/**
 * @question 1.3 BracketEvaluator
 */
public class DataAnalysis<E extends Comparable> {

	private Queue<E> queue;
	private Stack<E> stack;
	private E[] data;

	public DataAnalysis(E[] data) {
		this.data = data;
		this.queue = new Queue<>();
		this.stack = new Stack<>();
	}

	/**
	 * Method: brackEvaluator
	 * 
	 * Dequeue from queue and the push onto stack.
	 * Pop from stack to then evaluate if it matches a closing bracket.
	 * 
	 * @return if stack is empty, or if brackets match.
	 */
	public boolean bracketEvaluator() {
		extractBracket();
		if (queue.isEmpty()) { return false; }
		if (queue.getSize() % 2 != 0) { return false; }

		while(!queue.isEmpty()) {
			Character ch = (Character) queue.dequeue();
			if (checkLeft(ch)) { stack.push((E) ch); }
			if (stack.isEmpty()) { return false; }
			if (ch.equals(')') && (char) stack.pop() != '(') return false;
			if (ch.equals(']') && (char) stack.pop() != '[') return false;
			if (ch.equals('}') && (char) stack.pop() != '{') return false;
			if (ch.equals('>') && (char) stack.pop() != '<') return false;
		}
		return stack.isEmpty();
	}

	/**
	 * Method: extractBracket
	 * 
	 * Uses a queue to extract the brackets.
	 */
	private void extractBracket() {
		for (int i = 0; i < data.length; i++) {
			if (checkLeft((char) data[i]) || checkRight((char) data[i])) {
				queue.enqueue(data[i]);
			}
		}
	}

	/**
	 * Method: checkLeft
	 *
	 * @param ch the char in charArray
	 * @return if char is an opening bracket.
	 */
	private boolean checkLeft(char ch) { return (ch =='(' || ch == '[' || ch == '{' || ch == '<'); }

	/**
	 * Method: checkLeft
	 *
	 * @param ch the char in charArray
	 * @return if char is a closing bracket.
	 */
	private boolean checkRight(char ch) { return (ch ==')' || ch == ']' || ch == '}' || ch == '>'); }
}
