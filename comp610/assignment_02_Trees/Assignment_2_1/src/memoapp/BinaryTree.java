package memoapp;

import java.util.ArrayList;
import java.util.List;

/**
 * @question 1.2 BinaryTreeMemoSort
 */
public class BinaryTree<E, F extends Comparable> {

	public Node root; // root of binary tree
	public int number_of_node = 0;
	public Node[] nodeList = null; // store sorted nodes
	public boolean orderReversed = false; // flag

    /**
     * Constructor, default.
     */
	public BinaryTree() {
        this.root = null;
	}

    /**
     * Constructor, that takes in root.
     */
	public BinaryTree(Node root) {
		if (root.key != null) {
			this.root = root;
			this.number_of_node++;
		}
		else System.out.println("Node has no key, tree empty");
	}

    /**
     * Constructor, that takes element and key and adds as root.
     */
	public BinaryTree(E element, F key) {
		this(new Node(element, key));
	}

    /**
     * Takes an element and a key, then creates a Node object that loads
     * element and key and is then passed into addNode() to attach to tree.
     * 
     * @param element, points to memo object
     * @param key, points to date or title of memo
     */
	public void addElement(E element, F key) {
		Node newNode = new Node(element);
		newNode.key = key;

		if (this.root == null) {
			this.root = newNode;
			this.number_of_node++;
		}
		else addNode(newNode);
	}

	/**
	 * Takes a root and a new node to create a tree when empty or adds
	 * the new node to the binary tree.
	 * 
	 * @param root, become root if this.root is null.
	 * @param newNode, to be added to binary tree.
	 */
	public void addNode(Node newNode) {
		if (this.root == null) this.root = newNode; // add node as root
		else addNode(this.root, newNode); // addNode to tree
		this.number_of_node++; // increments num of nodes
	}

	private void addNode(Node root, Node newNode) {
		int compareResult = root.compareTo(newNode); // get compareTo result

		if(compareResult == 0) {
			System.out.println("Duplicate memo. Not added.");
		}
		else if (compareResult > 0) {
			if (root.left == null) root.left = newNode; // add node as left child
			else addNode(root.left, newNode); // recursive check down tree from left
		}
		else if (compareResult < 0) {
			if (root.right == null) root.right = newNode; // add node as right child 
			else addNode(root.right, newNode); // recursive check down tree from right
		}
	}

	/**
     * Reverses the order recursively and updates the orderReversed flag.
	 */
	public void reverseOrder() {
		if (this.root != null) {
			reverseOrder(this.root);
			orderReversed = orderReversed ? false : true; // sets flag value
		}
	}

	/**
	 * Recursive traversal that modifies by swapping left and right nodes.
	 * O(n) as it only traverses each node once and does not rebuild the tree.
	 * 
	 * @param root, root of tree to reverse.
	 */
	private void reverseOrder(Node root) {
		if (root == null) return;
		if (root.left != null) reverseOrder(root.left); // visit left subtree
		if (root.right != null) reverseOrder(root.right); // visit right subtree

		// swap left and right nodes
		Node temp = root.left;
		root.left = root.right;
		root.right = temp;
	}

    /**
     * Creates a target node from key parameter, which is passed to searchNode(),
     * to complete search. Target node only contains a key value for searching.
     * 
     * @param key, of element to find.
     * @return element(memo) of searchNode() or null if not found.
     */
	public E searchElement(F key) {
		if (this.root != null) {
			Node targetNode = new Node(key);
			Node result = searchNode(this.root, targetNode);
			return (E) result;
		}
		else return null;
	}

    /**
     * Searches tree for target node recursively. orderReversed()
     * will inverse how compareResult will work, needing to flip operand,
     * greater than or less than operands.
     * 
     * @param root, root of tree
     * @param targetNode holding key to search for
     * @return node if it finds match otherwise null
     */
	public Node searchNode(Node root, Node targetNode) {
		if (root != null) {
			int compareResult = root.compareTo(targetNode);

			if (compareResult == 0) return root; // found, return it

            // if compareResult > 0 then search left
            // if orderReverse = true, then to search left will need invert so compareResult < 0
			else if (orderReversed ? (compareResult < 0) : (compareResult > 0)) {
				return searchNode(root.left, targetNode); // recursive search left
			}

            // if compareResult < 0 then search right
            // if orderReverse = true, then to search left will need invert so compareResult > 0
			else if (orderReversed ? (compareResult > 0) : (compareResult < 0)) {
				return searchNode(root.right, targetNode); // recursive search right
			}
		}
		return null;
	}

	/**
	 * Recursive function. Travels each node of current tree and stores the nodes
	 * to nodeList.
	 */
	public Node[] toSortedList() {
		List<Node> nodeList = new ArrayList<>(); // use ArrayList initially
		if (this.root != null) toSortedList(this.root, (ArrayList<Node>) nodeList);
		this.nodeList = nodeList.toArray(new Node[number_of_node]); // convert to array
		return nodeList.toArray(new Node[number_of_node]); // redundant
	}

    /**
     * Uses inorder traversal to build array list.
     * 
     * @param root of tree
     * @param nodeList, used to store nodes of tree.
     */
	private void toSortedList(Node root, ArrayList<Node> nodeList) {
		if (root.left != null) toSortedList(root.left, nodeList);
		nodeList.add(root); // add to nodeList
		if (root.right != null) toSortedList(root.right, nodeList);
	}

    /**
     * Travels each node on current tree and displays node.elements'
     * details in the order from smallest to largest key value. If
     * reverseOrder() is flagged then it displays as largest to smallest key
     * value.
     * 
     * @param root, root of binary tree.
     */
	public void traversal() { if (this.root != null) traversal(this.root); }
	private void traversal(Node root) {
		if (root.left != null) traversal(root.left); // traverse left
		System.out.println(root.element); // DFS, inorder
		if (root.right != null) traversal(root.right); // traverse right
	}
}