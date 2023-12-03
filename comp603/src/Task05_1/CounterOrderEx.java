package Task05_1;

public class CounterOrderEx extends Thread {

	private static int turn = 1;
	private int num;

	public CounterOrderEx(int num, String name) {
		this.num = num;
		this.setName(name);
	}

	public static void main(String[] args) {
		CounterOrderEx t1 = new CounterOrderEx(1, "Odd: ");
		CounterOrderEx t2 = new CounterOrderEx(2, "Even: ");
		t1.start();
		t2.start();
	}

	public void run() {
		for (int i = this.num; i <= 10; i += 2) {
			synchronized (CounterOrderEx.class) {
				if (turn != this.num) {
					try { CounterOrderEx.class.wait();}
					catch (InterruptedException ex) {}
				}
				System.out.println(currentThread().getName() + i);
				try { sleep(500); } catch (InterruptedException ex) {}
				turn = (turn == 1) ? 2 : 1;
				CounterOrderEx.class.notify();
			}
		}
	}
}
