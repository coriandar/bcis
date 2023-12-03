package dsa_w02;

import java.util.NoSuchElementException;
import java.util.Random;

/**
 *
 * @author coriandar
 */
class BagGenericApp {

	public static void main(String[] args) {
		// Generic E type no set to Integer at COMPILE
		BagGeneric<Integer> bag = new BagGeneric<>(10);
		bag.addItem(12);
		bag.addItem(3);
		bag.addItem(1);
		bag.addItem(45);
		Integer x =  bag.grab();
		System.out.println("grabbed" + x);
	}
}

public class BagGeneric <E> {

	private Random rand;
	private int numElements;
	private E[] array;

	public BagGeneric(int capacity) {
		numElements = 0;
		array = (E[])(new Object[capacity]);
		rand = new Random();
	}

	public boolean addItem(E item) {
		if (numElements < array.length) {
			array[numElements] = item;
			numElements++;
			return true;
		}
		else return false;
	}

	public E grab() {
		if (numElements > 0) return array[rand.nextInt(numElements)];
		else throw new NoSuchElementException();
	}
}
