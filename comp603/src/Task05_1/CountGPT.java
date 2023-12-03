package Task05_1;

public class CountGPT extends Thread {

	static int turn = 1;
	int num;

	public CountGPT(int num) { this.num = num; }

	public static void main(String[] args) {
		CountGPT odd = new CountGPT(1);
		CountGPT even = new CountGPT(2);

		odd.setName("Odd: ");
		even.setName("Even: ");

		odd.start();
		even.start();
	}

	public void run() {
		for (int i = num; i <= 10; i += 2) {
			synchronized (CountGPT.class) {
				// try make an if statment or have control be
				// turn
				while (turn != this.num) {
					try { CountGPT.class.wait(); } catch (InterruptedException e) {}
				}
				System.out.println(Thread.currentThread().getName() + i);
				turn = (turn == 1) ? 2 : 1;
				CountGPT.class.notifyAll();
			}
		}
	}
}
