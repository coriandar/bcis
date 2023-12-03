package mobileVirus;

/**
 * @question 2.1 VirusSimulation
 * @Q: Which object(s) have you chosen for the synchronize? Why?
 * @A: The Repair object. As it is the shared resource(monitor).
 */
public class Phone extends Thread implements Comparable<Phone> {

	public int posX; // position
	public int posY;
	private int vecX; //vector
	private int vecY;
	public int boundW; // set width from panel
	public int boundH; // set height from panel
	public int size; // size of ball
	public int hp; // remove if over 500 frames
	public boolean isInfected;
	public boolean goRepair;
	public Repair repair; // synchronized access

	public Phone(int boundW, int boundH, Repair repair) {
		this.posX = genRand(1000); // randomise posX in window
		this.posY = genRand(1000);
		this.vecX = genRand(10); // randomise vector X
		this.vecY = genRand(10);
		this.boundW = boundW; // set boundaries
		this.boundH = boundH;
		this.size = 10; // size of ball 10
		this.hp = 500; // health of 500
		this.isInfected = false;
		this.goRepair = false;
		this.repair = repair;
	}

	@Override
	public void run() {
		while (this.hp > 0) {
			try { sleep(10); } catch (InterruptedException ex) {}
			if (this.isInfected) getRepaired();
			else move();
		}
	}

	/**
	 * Method: getRepaired
	 * 
	 * Critical section, access Repair object.
	 */
	private void getRepaired() {
		synchronized(this.repair) { // monitor
			if (repair.isAccessible) { // critical section
				repair.isAccessible = false; // shared, one access at a time
				goRepair = true; // only one phone will go repair
			}
		}
		goRepair(5);
	}

	/**
	 * Method: goRepair
	 * 
	 * Move towards repair. If in range then repair. Otherwise move randomly.
	 * 
	 * @param value of new vector
	 */
	private void goRepair(int val) {
		this.hp--;
		if (this.goRepair) {
			if (this.posX < this.repair.posX) vecX = val;
			if (this.posX > this.repair.posX) vecX = -val;
			if (this.posY < this.repair.posY) vecY = val;
			if (this.posY > this.repair.posY) vecY = -val;
			posX += vecX;
			posY += vecY;

			if (repairInRange(10)) {
				try { sleep(1000); } catch (InterruptedException ex) {}
				this.goRepair = false;
				this.isInfected = false;
				this.hp = 500; 
				repair.isAccessible = true;
			}
		}
		else move();
	}

	/**
	 * Method: move
	 * 
	 * if x + size hits boundary then reverse vector
	 */
	private void move() {
		if (posX < 0 || posX + size >= this.boundW) vecX = -vecX;
		if (posY < 0 || posY + size >= this.boundH) vecY = -vecY;
		posX += vecX;
		posY += vecY;
	}

	/**
	 * Method: repairInRange
	 * 
	 * @param margin of error amount
	 * @return if the phone is in range of the repair
	 */
	public boolean repairInRange(int d) { return inRangeX(d) && inRangeY(d); }
	private boolean inRangeY(int d) { return repair.posY - d < posY && posY < repair.posY + d; }
	private boolean inRangeX(int d) { return repair.posX - d < posX && posX < repair.posX + d; }


	/**
	 * Method: setBoundary
	 * 
	 * Update phone boundary parameters.
	 * 
	 * @param boundW, boundH
	 */
	public void setBoundary(int boundW, int boundH) {
		this.boundW = boundW;
		this.boundH = boundH;
	}

	/**
	 * Method genRand
	 * 
	 * @param max
	 * @return random number between 1 and max
	 */
	private int genRand(int max) {
		return (int) Math.floor(Math.random() * max) + 1;
	}

	@Override
	public int compareTo(Phone o) {
		throw new UnsupportedOperationException("Not supported yet.");
	}
}
