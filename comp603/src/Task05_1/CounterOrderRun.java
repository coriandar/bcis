package Task05_1;

public class CounterOrderRun implements Runnable {
	// implement runnable more flexible, allows more implements
	private static int turn = 1;
	private int num;

	public CounterOrderRun(int num) { this.num = num; }

	public static void main(String[] args) {
		Thread t1 = new Thread(new CounterOrderRun(1));
		Thread t2 = new Thread(new CounterOrderRun(2));
		t1.setName("O: ");
		t2.setName("E: ");
		t1.start();
		t2.start();
	}

	@Override
	public void run() {
		for (int i = this.num; i <= 10; i += 2) {
			synchronized (CounterOrderRun.class) {
				if (turn != this.num) {
					try { CounterOrderRun.class.wait(); }
					catch (InterruptedException ex) {}
				}
				System.out.println(Thread.currentThread().getName() + i);
				turn = (turn == 1) ? 2 : 1;
				try { Thread.sleep(500); } catch (InterruptedException ex) {}
				CounterOrderRun.class.notify();
			}
		}
	}
}
