package Task09_mvcDemo;

import java.util.Observable;

public class Model extends Observable {

    private int counter;

    public Model() {
        System.out.println("Model()");
		this.counter = 0;
    }

    public void setValue(int value) {
        this.counter = value;
        System.out.println("Model init: counter = " + counter);
        setChanged();
        notifyObservers(counter);
    }

    public void incrementValue() {
        ++counter;
        System.out.println("Model     : counter = " + counter);
        setChanged(); //change the "changed" value as "true"
        notifyObservers(counter);
    }

	public void decrementValue() {
		--counter;
		System.out.println("Model     : counter = " + counter);
		setChanged(); // observable protected method
		notifyObservers(counter); // obersavable method to notify observer
	}
}
