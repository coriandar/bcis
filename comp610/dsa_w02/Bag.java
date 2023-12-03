package dsa_w02;

import java.util.NoSuchElementException;
import java.util.Random;

/**
 *
 * @author coriandar
 */
class BagApp {

	public static void main(String[] args) {
		Bag bag = new Bag(10);
		// Integer type cast to object at run
		bag.addItem(12);
		bag.addItem(3);
		bag.addItem(1);
		bag.addItem(45);

		// object type case to Integer at run
		Integer x = (Integer) bag.grab();
		System.out.println("grabbed" + x);
	}
}

public class Bag {

	private Random rand;
	private int numElements;
	private Object[] array;

	public Bag(int capacity) {
		numElements = 0;
		array = new Object[capacity];
		rand = new Random();
	}

	public boolean addItem(Object item) {
		if (numElements < array.length) {
			array[numElements] = item;
			numElements++;
			return true;
		}
		else return false;
	}

	public Object grab() {
		if (numElements > 0) return array[rand.nextInt(numElements)];
		else throw new NoSuchElementException();
	}
}
