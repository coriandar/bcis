package dsa_w04;

import java.util.Collection;

/**
 * @exercise 3.2 (Implementing Queues with Circular Arrays)
 *
 * Design and prepare a class called `ArrayQueue` for implementing a queue using
 * a circular array (the expandCapacity method will need som careful
 * consideration). Prepare a simple driver `main` method to test.
 *
 * @author coriandar
 */
public class CircularArray<E> {

	private E[] queue;
	private final int INITIAL_CAPACITY = 10;
	private int head; // tracks whats at front
	private int tail; // points to empty space after last number
	private int size; // tracks numElements

	public CircularArray() {
		this.size = 0;
		this.head = 0;
		this.tail = 0;
		queue = (E[]) (new Object[INITIAL_CAPACITY]);
	}

	public boolean enqueue(E element) {
		if (size < INITIAL_CAPACITY) {
			queue[(tail++) % INITIAL_CAPACITY] = element;
			size++;
			return true;
		}
		return false;
	}

	public E dequeue() {
		if (size > 0) {
			size--;
			return queue[(head++ % INITIAL_CAPACITY)];
		}
		return null;
	}

	public boolean isEmpty() {
		return this.size == 0;
	}

	public int size() {
		return this.size;
	}

	private void expandCapacity() {
		// capacity limited to n - 1 elements
		// where length of array is n
		// if front == back, expand array
		E[] largerQueue = (E[]) (new Object[queue.length * 2]);
		for (int i = 0; i < size; i++) {
			largerQueue[i] = this.queue[i];
		}
		queue = largerQueue;
	}
}
