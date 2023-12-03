package dsa_w05;

/**
 *
 * @author coriandar
 */
public class LinkedList {
	Node head;
	Node tail;
	boolean isDoubleLinkedList = false;
	int size = 0;

	public LinkedList(String[] dataList) {
		Node node = new Node();
		head = node;
		Node current = head;
		node.data = dataList[0];

		for (int i = 1; i < dataList.length; i++) {
			node = new Node();
			node.data = dataList[i];
			node.prev = null;
			node.next = null;
			current.next = node;
			current = current.next;
			size++;
		}
		tail = current;
	}

	public void printList(boolean reversely) {
		if (reversely) printList(head);
		else printList(head);
	}

	private void printList(Node current) {
		System.out.println(current.data);
		if (current.next != null) printList(current.next);
	}

	private void printListReversely(Node current) {
		if (current.next != null) printListReversely(current.next);
		System.out.println(current.data);
	}

	public void printListByLinker() {
		for (Node current = head; current != null; current = current.next) {
			System.out.println(current.data);
		}

		for (Node current = tail; current != null; current = current.prev) {
			System.out.println(current.data);
		}
	}

	public void toDoublyLinkedList() {
		toDoublyLinkedList(head);
		this.isDoubleLinkedList = true;
	}

//	private void toDoublyLinkedList(Node current) {
//		if (current.next != null) {
			/**
			 * next previous is current
			 *  start with current.next == null
			 * then goes to previous call
			 * current.next.prev == current;
			 * links final nodes previous to previous call, so on
			 */
//			current.next.prev = current;
//			toDoublyLinkedList(current.next);
//		}
//	}

	private Node toDoublyLinkedList(Node current) {
		if (current.next != null) {
			current.next.prev = current;
			return toDoublyLinkedList(current.next);
		}
		return current;
	}

	public void toCircularlyLinkedList() {
		tail.next = head;
		if (tail.prev != null) head.prev = tail;
	}
	
}
