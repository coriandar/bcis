package Task04_1;

public class Stack<E> {

	private final int INITIAL_CAPACITY = 200;
	private int numElements;
	private E[] elements;

	public Stack() {
		numElements = 0;
		elements = (E[]) (new Object[INITIAL_CAPACITY]);
	}

	public boolean push(E object) {
		if (numElements < INITIAL_CAPACITY) {
			elements[numElements++] = object;
			return true;
		}
		return false;
	}

	public E pop() {
		if (numElements > 0) {
			return elements[--numElements];
		}
		return null;
	}

	public boolean isEmpty() {
		return numElements == 0;
	}
}
