package dsa_w04;

/**
 *
 * @author coriandar
 */
public class Stack<E> {

    /**
     * 1. There is a bug in the stack class, find it and fix it.
     */

    private final int INITIAL_CAPACITY = 200;
    private int numElements;
    private E[] elements;

    public Stack() {
        numElements = 0;
        elements = (E[]) (new Object[INITIAL_CAPACITY]);
    }

    public boolean push(E object) {
        if (numElements < INITIAL_CAPACITY) {
            elements[numElements++] = object;
            return true;
        }
        return false;
    }

    public E pop() {
        if (numElements > 0) {
            return elements[--numElements];
//            E topElement = elements[--numElements];
//            System.out.println(numElements);
//            elements[numElements] = null;
//            return topElement;
            
        }
        return null;
    }

    public boolean isEmpty() {
        return numElements == 0;
    }
}
