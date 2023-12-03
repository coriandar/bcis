package Task05_1;

public class Counter extends Thread {

	int num;

	public Counter(int i) { this.num = i; }

	public static void main(String[] args) {
		Counter odd = new Counter(1);
		Counter even = new Counter(2);
		odd.setName("odd: ");
		even.setName("even: ");
		odd.start();
		even.start();
	}

	public synchronized void run() {
		for (int j = this.num; j <= 10; j += 2) {
			System.out.print(currentThread().getName() + j + "\n");
			try { Thread.sleep(1000); } catch (InterruptedException e) {}
		}
	}
}
