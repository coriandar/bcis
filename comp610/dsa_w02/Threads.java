
package dsa_w02;

/**
 *
 * @author coriandar
 */
public class Threads extends Thread {

	int id;
	int[] shared_array;
	boolean done = false;
	int booked = 0;

	public Threads(int id, int[] shared_array) {
		this.id = id;
		this.shared_array = shared_array;
	}

	public void run() {
		for (int i = 0; i < shared_array.length; i++) {
			book();
		}
	}

	/**
	 * Race condition occurs when more than one thread tries to
	 * access/modify same resource concurrently.
	 *
	 * Need to synchronize critical section/method Monitor object = shared
	 * resource
	 */
	public void book() {
		int i = 0;
		synchronized (shared_array) {
			for (; i < shared_array.length && shared_array[i] != 0; i++);
			if (i < shared_array.length) {
				shared_array[i] = id;
				booked++;
			}
		}
	}
}
