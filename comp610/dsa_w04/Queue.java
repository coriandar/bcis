package dsa_w04;

/**
 *
 * @author coriandar
 */
public class Queue<E> {

	/**
	 * 2. Do ONE change in enqueue() and dequeue() to make the queue to be
	 * circular queue
	 */
	private final int INITIAL_CAPACITY = 6;
	private int head;
	private int tail;
	private int numElements;
	private E[] elements;

	public Queue() {
		head = 0;
		tail = 0;
		numElements = 0;
		elements = (E[]) (new Object[INITIAL_CAPACITY]);
	}

	public boolean enqueue(E object) {
		if (numElements < INITIAL_CAPACITY) {
//			if (head == elements.length - 1 && tail != 0) {
//				head = 0;
//			}
			elements[(tail++) % INITIAL_CAPACITY] = object;
			numElements++;

//                            *
//              | 1 | 2 | 3 | 4 | 5 | (6) |
//                                     ^
//              SIZE = INITIAL_CAPACITY
//              SIZE = 6
//              rear = (rear + 1) % SIZE
//                   = 6 % 6
//                   = 0
//              
//              OR
//              if (head == size -1 && tail != 0 ) head = 0;
			return true;
		}
		return false;
	}

	public E dequeue() {
//			       *
//			 | 1 | 2 | 3 | 4 | 5 |
//			                   ^ 
//			 INI = 6
//			head = 0
//			     = (head + 1) % 6
//		 	     = 2 
//
//			need reutrn index 0
//
//			           *
//			 | 1 | 2 | 3 | 4 | 5 |
//			                   ^ 
		if (numElements > 0) {
			numElements--;

			return elements[(head++ % INITIAL_CAPACITY)];
		}
		return null;
	}

	public boolean isEmpty() {
		return numElements == 0;
	}
}
