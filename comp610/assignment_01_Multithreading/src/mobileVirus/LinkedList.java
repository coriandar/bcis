package mobileVirus;

/**
 * @question 1.1 LinkedList
 */
public class LinkedList<E extends Comparable> {

	public int size;
	private Node head;

	public LinkedList() {
		this.head = null;
		this.size = 0;
	}

	/**
	 * Method: addHead
	 *
	 * @param data - data to add to head of list
	 */
	public void addHead(E data) {
		Node<E> newHead = new Node(data);
		newHead.next = getHead(); // create linke to current head
		this.head = newHead; // update head
		this.size++;
	}

	/**
	 * Method: add
	 *
	 * Create a node and adds to end of the linked list. Uses private helper
	 * method, OOP principles of abstraction and encapsulation.
	 *
	 * @param data - to be added
	 */	
	public void add(E data) {
		if (isEmpty()) this.head = new Node(data);
		else add(getHead(), new Node(data));
		this.size++;
	}
	private void add(Node head, Node newNode) {
		if (head.next == null) head.next = newNode; // base case
		else add(head.next, newNode); // if null, don't call again
	}

	/**
	 * Method: addInOrder
	 * 
	 * Create node, add to linked list in ascending numerical or alphabetical order
	 *
	 * @param data - to be added in order
	 */	
	public void addInOrder(E data) {
		Node<E> newNode = new Node(data);
		if (isEmpty()) { // head is null then add to start
			this.head = newNode;
			this.size++;
		} else if (getHead().data.compareTo(data) >= 0) {
			addHead(data); // add to start O(1)
		} else {
			addInOrder(this.head, newNode); // insert between larger and previous
			size++;
		}
	}
	private void addInOrder(Node currentNode, Node newNode) {
		if (currentNode.next == null) {
			currentNode.next = newNode; // base case
		} else if (currentNode.next.data.compareTo(newNode.data) > 0) { // insert between
			newNode.next = currentNode.next; // put curr.next as newNode.next
			currentNode.next = newNode; // newNode after current
		} else {
			addInOrder(currentNode.next, newNode);
		}
	}

	/**
	 * Method: getHead
	 *
	 * @return head of list
	 */
	public Node getHead() {
		if (this.head != null) return this.head;
		return null;
	}

	/**
	 * Method: getNode
	 *
	 * @param index - to look for
	 * @return node at index
	 */
	public Node getNode(int index) {
		if (getHead() != null) return getNode(index, getHead());
		return null;
	}
	private Node getNode(int index, Node head) {
		if (index == 0) return head;
		return getNode(--index, head.next);
	}

	/**
	 * Method: getData
	 *
	 * @param index - look for data at
	 * @return generic data from node at index
	 */
	public E getData(int index) {
		if (getHead() != null) return getData(index, getHead());
		return null;
	}
	private E getData(int index, Node head) {
		if (index == 0) return (E) head.data; // requires cast to generic
		return getData(--index, head.next);
	}

	/**
	 * Method: remove
	 * 
	 * Takes node as an argument and removes a node which has the same
	 * data as the argument node from linked list.
	 * 
	 * @param node - to be removed
	 */
	public void remove(Node node) { if (getHead() != null) removeMatch(getHead(), node); }
	private void removeMatch(Node head, Node node) {
		if (head.next != null && head.next.data.equals(node.data)) {
			head.next = head.next.next;
			size--;
		}
		else if (head.next != null) removeMatch(head.next, node);
	}

	/**
	 * Method: remove
	 * 
	 * Takes index of a node to be removed and removes node at that index.
	 * 
	 * @param position - index of node to be removed
	 */
	public void remove(int position) {
		if (position == 0 && getHead() != null) removeFromHead();
		if (position == size - 1 && getHead() != null) removeFromTail();
		if (0 < position && position < size && getHead() != null) removeByIndex(getHead(), position);
	}
	private void removeByIndex(Node head, int position) {
		if (position == 1) {
			head.next = head.next.next;
			size--;
		}
		else removeByIndex(head.next, position - 1);
	}

	/**
	 * Method: removeFromHead
	 *
	 * @return the removed node
	 */
	public Node removeFromHead() {
		if (getHead() != null) {
			Node removed = getHead();
			this.head = getHead().next;
			size--;
			return removed;
		}
		return null;
	}

	/**
	 * Method: removeFromTail
	 *
	 * @return the removed node
	 */
	public Node removeFromTail() {
		if (getHead() != null) return removeFromTail(getHead());
		return null;
	}
	private Node removeFromTail(Node node) {
		if (node == null) return null;
		if (node.next == null) { // edge case
			Node removed = node;
			this.head = null;
			this.size--;
			return removed;
		}
		if (node.next.next == null) { // edge case
			Node removed = node.next;
			node.next = null;
			this.size--;
			return removed;
		}
		return removeFromTail(node.next);
	}

	/**
	 * Method: printLinkedList
	 *
	 * Prints item in list, in order from head to end
	 */
	public void printLinkedList() {
		if (getHead() != null) printLinkedList(getHead());
		System.out.println();
	}
	private void printLinkedList(Node node) {
		System.out.print(node.data.toString());
		if (node.next != null) printLinkedList(node.next);
	}

	/**
	 * Method: contains
	 * 
	 * Takes a node evaluates if the linked list contains this node.
	 *
	 * @param node
	 * @return Boolean
	 */
	public boolean contains(Node node) { return contains(getHead(), node); }
	private boolean contains(Node head, Node node) {
		if (head == null) return false;
		if (head.data.equals(node.data)) return true;
		return contains(head.next, node);
	}

	public boolean notEmpty() { return !(getHead() == null); }
	public boolean isEmpty() { return getHead() == null; }
}
