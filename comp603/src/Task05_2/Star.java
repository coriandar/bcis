package Task05_2;

public class Star implements Runnable {
	private static int max = 9;
	private static int counter = 1;
	private static int turn = 1;
	private int order;

	public Star(int order) { this.order = order; }

	public static void main(String[] args) {
		for (int i = 1; i < 3; i++) {
			Thread th = new Thread(new Star(i));
			th.setName(i + ":");
			th.start();
		}
	}

	@Override
	public void run() {
		while (this.counter <= this.max) {
			synchronized(Star.class) {
				if (turn != this.order) {
					try { Star.class.wait(); } catch (InterruptedException ex) {}
				}
				if (this.order == 1) {
					if (this.counter <= this.max) {
						printThread();
						printSpace();
					}
				}
				if (this.order == 2) {
					printThread();
					printStar();
					printCh('\n');
					this.counter++;
				}
				turn = (turn == 1) ? 2 : 1;
				Star.class.notifyAll();
			}
		}
	}

	private void printSpace() { for (int j = 0; j < spcCalc(); j++) printCh(' '); }
	private int spcCalc() { return this.max - this.counter; }

	private void printStar() { for (int j = 0; j < strCalc(); j++) printCh('*'); }
	private int strCalc() { return 2 * this.counter - 1; }

	private void printThread() { System.out.print(Thread.currentThread().getName()); }
	private void printCh(char sym) { System.out.print(sym); }
}
