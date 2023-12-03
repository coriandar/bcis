package memoapp;

/**
 * @question 1.2 BinaryTreeMemoSort
 */
public class Node<E, F extends Comparable> implements Comparable<Node> {

	public E element; // generic, points to memo object
	public F key; // generic, points to date or title of memo
	public Node left; // node with smaller key value
	public Node right; // node with larger key value

	/**
	 * Constructor method, default
	 */
	public Node() {
        this.element = null;
	}

	/**
	 * Constructor method
	 * @param element, to be added to node.
	 */
	public Node(E element) {
		this.element = element;
	}

	/**
	 * Constructor method 
	 * @param element, to be added to node.
	 * @param key, to be added to node.
	 */
	public Node(E element, F key) {
		this(element);
		this.key = key;
	}

	/**
	 * Constructor method 
	 * @param key, to be added to node.
	 */
	public Node(F key) {
        this();
		this.key = key;
	}

	/**
	 * Takes in node object and compares to the current node by their keys. 
	 * 
	 * @param t, node to compare key values with
	 * @return compareTo value
	 */
	@Override
	public int compareTo(Node otherNode) {
		return this.key.compareTo(otherNode.key);
	}
}
