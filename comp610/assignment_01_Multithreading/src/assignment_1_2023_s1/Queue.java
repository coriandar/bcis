package assignment_1_2023_s1;

/**
 * @question 1.2 Queue
 */
public class Queue<E extends Comparable> {

	private LinkedList<E> queue;

	public Queue() {
		this.queue = new LinkedList<>();
	}

	public E dequeue() {
		if (!isEmpty()) return (E) queue.removeFromHead().data;
		return null;
	}

	public void enqueue(E data) { queue.add(data); }
	public void printQueue() { queue.printLinkedList(); }
	public int getSize() { return queue.size; }
	public boolean isEmpty() { return queue.isEmpty(); }
}
