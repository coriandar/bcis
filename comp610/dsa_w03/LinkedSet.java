package dsa_w03;

/**
 *
 * @author coriandar
 */
public class LinkedSet<E extends Comparable> {

	SetNode head;
	int size;

	public LinkedSet() {
		head = null;
		size = 0;
	}

	public void add(E data) {
		SetNode<E> newNode = new SetNode();
		newNode.data = data;

		if (size == 0) {
			head = newNode;
			size = 1;
		} else {
			if (!contains(data)) {
				SetNode currentNode = head;
				for (; currentNode.next != null; currentNode = currentNode.next);
				currentNode.next = newNode;
				size++;
			}
		}
	}

	public boolean contains(E data) {
		return contains(this.head, data);
	}

	// sometimes need helper function
	private boolean contains(SetNode head, E data) {
		if (head.next != null) return contains(head.next, data);
		if (head.data.equals(data)) return true;
		return false; // base case
	}

	public boolean containsBad(E data) {
		// ...11 lines
		// check whether set contains the parameter data
		SetNode<E> current = this.head;
		while (current != null) {
			if (current.data.equals(data)) return true;
			else current = current.next;
		}
		return false;
	}
	
	public boolean containsSolution (E data) {
    SetNode currentNode = head;
    SetNode<E> checkNode = new SetNode();
    checkNode.data = data;
    for (; currentNode != null; currentNode = currentNode.next) {
        if (currentNode.compareTo(checkNode) == 0) {
            return true;
        }
    }
    return false;
}

	public void printList() {
		printList(this.head);
	}

	// helper
	private void printList(SetNode node) {
		// reverse order by running before recrusive call
		System.out.println(node.data.toString()); // base case
		if (node.next != null) {
			printList(node.next);
		}
	}

	public String toString() {
		return toString(head);
	}

	public String toStringBad() {
		return toStringBad(head);
	}

	public String toStringReversely() {
		return toStringReversely(head);
	}

	public String toStringReverselyChatGPT() {
		return toStringReverselyChatGPT(head);
	}

	public String toStringReverselyBad() {
		return toStringReverselyBad(head);
	}

	private String toString(SetNode head) {
		if (head.next == null) {
			return "";
		}
		return head.data + " " + toString(head.next);
	}
	
	public String toStringSolution() {
		SetNode currentNode = head;
		String outputString = "";
		for (; currentNode != null; currentNode = currentNode.next) {
			outputString += currentNode + "";
		}
		return outputString;
	}

	private String toStringBad(SetNode head) {
		// returns a string which contains all Node's data
		SetNode<E> current = this.head;
		StringBuilder output = new StringBuilder();
		while (current != null) {
			output.append(current.data + " ");
			current = current.next;
		}
		return output.toString();
	}

	public String toStringReverseSolution() {
		String outputString = "";
		if (head.next != null) {
			outputString += toStringReversely(head.next) + " ";
		}
		return outputString + head.data;
	}

	private String toStringReverselyChatGPT(SetNode head) {
		// can have multiple in recursive base cases
		if (head == null) return ""; // reaches end
		if (head.next == null) return head.data.toString(); // next one is end
		return toStringReverselyChatGPT(head.next) + " " + head.data;
	}

	private String toStringReversely(SetNode head) {
		// returns a string which contains all Node's data reversely
		StringBuilder output = new StringBuilder();
		if (head.next != null) {
			output.append(toStringReversely(head.next) + " ");
		}
		return output.append(head.data).toString();
	}

	private String toStringReverselyBad(SetNode head) {
		// returns a string which contains all Node's data reversely
		SetNode<E> current = head;
		String[] stringList = new String[this.size];
		for (int i = 0; current != null; i++) {
			stringList[i] = (String) current.data;
			current = current.next;
		}
		StringBuilder output = new StringBuilder();
		for (int j = this.size - 1; j >= 0; j--) {
			output.append(stringList[j]);
		}
		return output.toString();
	}
}
