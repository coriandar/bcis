package Task05_1;

public class CounterRunnable {
	int counter = 1;	
	static int N = 10;

	public static void main(String[] args) {
		CounterRunnable test = new CounterRunnable();

		Thread even = new Thread(new Runnable() {
			public void run() {
				test.printEven();
			}
		});

		Thread odd = new Thread(new Runnable() {
			public void run() {
				test.printOdd();
			}
		});

		even.setName("even: ");
		odd.setName("odd: ");
		even.start();
		odd.start();
	}

	public synchronized void printOdd() {
		while (counter < N) {
			while (counter % 2 == 0) {
				try { wait(); } catch (InterruptedException ex) {}
			}
			System.out.println(Thread.currentThread().getName() + counter);
			counter++;
			notify();
		}
	}

	public synchronized void printEven() {
		while (counter < N) {
			while (counter % 2 == 1) {
				try { wait(); } catch (InterruptedException ex) {}
			}
			System.out.println(Thread.currentThread().getName() + counter);
			counter++;
			notify();
		}
	}
	
}
