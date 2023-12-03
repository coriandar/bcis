package finalExam;

public class ParkingSystem {
	private int bigSpace; // 1
	private int mediumSpace; // 2
	private int smallSpace; // 3
	
	public static void main(String[] args)
	{
		ParkingSystem garage = new ParkingSystem(5, 5, -1);
		System.out.println(garage);

		System.out.println("Adding test:");
		System.out.println("CarType1: " + garage.addCar(1));
		System.out.println("CarType2: " + garage.addCar(2));
		System.out.println("CarType3: " + garage.addCar(3));
		System.out.println("CarType3: " + garage.addCar(3));
		System.out.println("CarType3: " + garage.addCar(3));
		System.out.println("CarType3: " + garage.addCar(3));
		System.out.println("CarType3: " + garage.addCar(3) + "\n");

		System.out.println(garage);
	}
	
	/**
	 * constructor - number of spaces
	 * */
	public ParkingSystem(int bg, int med, int sm) {
		if (bg < 0) {
			this.bigSpace = 4;
		} else {
			this.bigSpace = bg;
		}

		if (med < 0) {
			this.mediumSpace = 4;
		} else {
			this.mediumSpace = med;
		}

		if (sm < 0) {
			this.smallSpace = 4;
		} else {
			this.smallSpace = sm;
		}
	}

	/**
	 * toString
	 * */
	public String toString() {
		StringBuilder output = new StringBuilder();

		output.append("Available spaces:\n");
		output.append("bigSpace: " + getBig() + "\n");
		output.append("mediumSpace: " + getMedium() + "\n");
		output.append("smallSpace: " + getSmall() + "\n");

		return output.toString();
	}
	
	
	/**
	 * methods
	 * */
	public boolean addCar(int carType) {
		if (carType == 1) {
			if (this.getBig() > 0) {
				this.bigSpace--;
				return true;
			}
		}
		else if (carType == 2) {
			if (this.getMedium() > 0) {
				this.mediumSpace--;
				return true;
			}
		}
		else if (carType == 3) {
			if (this.getSmall() > 0) {
				this.smallSpace--;
				return true;
			}
		}
		return false;
	}
	
	/**
	 * getMethodsOnly
	 * */
	public int getBig() {
		return bigSpace;
	}

	public int getMedium() {
		return mediumSpace;
	}

	public int getSmall() {
		return smallSpace;
	}
}

/**
Question: The Parking System (34 marks):
	1. Big, medium, small carparks spaces, held as private instance variables. Write a constructor that sets the number of carparks available for each private instance variable. If a negative number is entered set the default to 4.

	2. Create get methods for each instance variable. No set methods.

	3. Create toString() override to display information for all instance variables.

	4. Create the boolean addCar(int carType) method. Where each carType can only correspond to its carpark space. Big, medium, small corresponds to 1,2,3 etc. There is a limited amount of carpark size spaces, it cannot be negative. If a car can be added return true, else false.

	5. Write a static main method to demonstrate.
*/