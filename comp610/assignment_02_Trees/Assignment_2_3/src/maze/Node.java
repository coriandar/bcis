package maze;

import java.util.ArrayList;
import java.util.List;

public class Node<E extends Comparable> implements Comparable<Node> {
	public E key;
	public int posX;
	public int posY;
	public Node<E> parent; // parent node
	public List<Node> children; // llist of children nodes
	public boolean isStart; // flag for starting node
	public boolean isExit; // flag for exit node

	/**
	 * Constructor
	 * 
	 * @param key, of node
	 * @param posX, x coordinate
	 * @param posY, y coordinate
	 * @param isStart, flag for is start node
	 * @param isExit, flag for is exit node
	 */
	public Node(E key, int posX, int posY, boolean isStart, boolean isExit) {
		this.key = key;
		this.posX = posX;
		this.posY = posY;
		this.parent = null;
		this.children = new ArrayList<>();
		this.isStart = isStart;
		this.isExit = isExit;
	}

	/**
	 * Adds a child to current node.
	 * 
	 * @param child, child of current node
	 */
	public void addChild(Node child) { this.children.add(child); }

	/**
	 * Adds parent to child node
	 * 
	 * @param parent, parent node of child
	 */
	public void addParent(Node parent) { if (this.parent == null) this.parent = parent; }

	/**
	 * @return the key of node
	 */
	public String getLabel() { return this.key.toString(); }

	@Override
	public String toString() {
		StringBuilder out = new StringBuilder();
		out.append(key);
		out.append("," + this.posX);
		out.append("," + this.posY);
		if (!children.isEmpty()) for (Node c : this.children) out.append("," + c.key);
		if (parent != null) out.append(" | Parent: " + parent.key);
		if (isStart) out.append(" | Start: " + isStart);
		if (isExit) out.append(" | Exit: " + isExit);
		return out.toString();
	}

	@Override
	public int compareTo(Node o) {
		return key.compareTo(o.key);
	}
}
