package assignment_1_2023_s1;

/**
 * @question 1.2 Stack
 */
public class Stack<E extends Comparable> {

	private LinkedList<E> stack;

	public Stack() {
		this.stack = new LinkedList<>();
	}

	public E pop() {
		if (!isEmpty()) return (E) stack.removeFromTail().data;
		return null;
	}

	public void push(E data) { stack.add(data); }
	public void printStack() { stack.printLinkedList(); }
	public int getSize() { return stack.size; }
	public boolean isEmpty() { return stack.isEmpty(); }
}
