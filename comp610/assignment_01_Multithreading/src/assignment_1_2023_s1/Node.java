package assignment_1_2023_s1;

/**
 * @question 1.1 LinkedList
 */
public class Node<E extends Comparable> implements Comparable<Node> {

	public E data;
	public Node<E> next;

	public Node() {
		this(null); // null as E data
	}

	public Node(E data) {
		this.data = data;
		this.next = null;
	}

	@Override
	public int compareTo(Node o) { return data.compareTo(o.data); }
	public boolean equals(Node node) { return data.equals(node.data); }
}
