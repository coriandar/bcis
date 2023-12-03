
package dsa_w02;

/**
 *
 * @author coriandar
 */
public class Main {

	public static void main(String[] args) {
		int[] seats = new int[1000];
		for (int i = 0; i < seats.length; i++) {
			seats[i] = 0;
		}

		Threads t1 = new Threads(1, seats);
		Threads t2 = new Threads(2, seats);
		Threads t3 = new Threads(3, seats);

		t1.start();
		t2.start();
		t3.start();

		while (t1.isAlive() || t2.isAlive() || t3.isAlive());

		for (int i = 0; i < seats.length; i++) {
			System.out.print(seats[i] + " ");
			if (i % 10 == 9) {
				System.out.println("");
			}
		}

		System.out.println("T1 booked: " + t1.booked);
		System.out.println("T2 booked: " + t2.booked);
		System.out.println("T3 booked: " + t3.booked);
		System.out.println("Total booked: " + (t1.booked + t2.booked + t3.booked));
	}
}
