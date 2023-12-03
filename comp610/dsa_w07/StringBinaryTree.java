package dsa_w07;

public class StringBinaryTree {
	BTreeNode root;

	public static void main(String[] args) {
		String[] elements = "cow, fly, dog, bat, fox, cat, eel, ant".split(", ");
		StringBinaryTree bTree = new StringBinaryTree(elements);
		bTree.traverse();

		System.out.println("");
		bTree.linkParent();
		bTree.traverse();
	}

	public StringBinaryTree(String[] list) {
		for (int i = 0; i < list.length; i++) add(list[i]);
	}

	public void add(String data) {
		if(root == null) {
			root = new BTreeNode();
			root.data = data;
		}
		else {
			BTreeNode newNode = new BTreeNode();
			newNode.data = data;
			add(root, newNode);
		}
	}

	private void add(BTreeNode root, BTreeNode newNode) {
		if(root.compareTo(newNode) > 0)
		{
			if (root.left != null) add(root.left, newNode);
			else root.left = newNode;
		}
		else
		{
			if (root.right != null) add(root.right, newNode);
			else root.right = newNode;
		}
	}

	public void linkParent() { linkParent(root); }

//	private BTreeNode linkParent(BTreeNode root) {
//	}

	private void linkParent(BTreeNode root) {
		if (root.left != null) {
			root.left.parent = root;
			linkParent(root.left);
		}
		if (root.right != null) {
			root.right.parent = root;
			linkParent(root.right);
		}
	}

	public void traverse() { traverse(root); }

	private void traverse(BTreeNode root) {
		System.out.println(root); // DFS, PreOrder
		if(root.left != null) traverse(root.left);
//		System.out.println(root); // DFS, InOrder
		if(root.right != null) traverse(root.right);
//		System.out.println(root); // DFS, PostOrder
	}
}

class BTreeNode {
	String data;
	BTreeNode parent;
	BTreeNode left;
	BTreeNode right;

	public int compareTo(BTreeNode node) {
		return data.compareTo(node.data);
	}

	public String toString() {
		return "Node " + data +
				" Parent: " + (parent == null ? "null" : parent.data) +
				" Left: " + (left == null ? "null" : left.data) +
				" Right: " + (right == null ? "null" : right.data);
	}
	
}
