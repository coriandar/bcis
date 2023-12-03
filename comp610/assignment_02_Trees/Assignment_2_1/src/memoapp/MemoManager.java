package memoapp;

import java.util.Date;

/**
 * @question 1.2 BinaryTreeMemoSort
 */
public class MemoManager<E extends Comparable> {

	public BinaryTree bTreeDate; // node.key is Date type
	public BinaryTree bTreeTitle; // node.key is String type

	public MemoManager() {
		this.bTreeDate = new BinaryTree<>();
		this.bTreeTitle = new BinaryTree<>();
	}

	/**
	 * Creates a memo object from parameters then calls
	 * addToTree() twice passing the Memo object with different
	 * keys (date and title) to add on different trees.
	 * 
	 * @param date of memo
	 * @param title of memo
	 * @param message of memo
	 */
	public void addMemo(String date, String title, String message) {
		Memo newMemo = new Memo(date, title, message);
		addToTree(newMemo, (E) newMemo.date);
		addToTree(newMemo, (E) newMemo.title);
	}

	/**
	 * Takes memo object and a key (type Date or String) and
	 * will add it to the respective tree matching the required
	 * key type.
	 * 
	 * @param memo to be added
	 * @param key of memo, Date or String
	 */
	public void addToTree(Memo memo, E key) {
		if (key instanceof Date) bTreeDate.addElement(memo, key);
		else if (key instanceof String) bTreeTitle.addElement(memo, key);
	}

	/**
	 * @param key, used for searching
	 * @return memo that matches the searching key or null if not found.
	 */
	public Memo findMemo(E key) {
		Memo searchResult = null;

		if (key instanceof Date) {
			Node nodeSearch = (Node) bTreeDate.searchElement(key);
			if (nodeSearch != null) searchResult = (Memo) nodeSearch.element;
		}

		if (key instanceof String) {
			Node nodeSearch = (Node) bTreeTitle.searchElement(key);
			if (nodeSearch != null) searchResult = (Memo) nodeSearch.element;
		}

		return searchResult;
	}

	/**
	 * @param key (type can be String or Date)
	 * @return a sorted memo array
	 */
	public Memo[] getSortedMemoList(E key) {
		Memo[] memoList = null;

		if (key instanceof Date) {
			if (bTreeDate.root != null) {
				memoList = new Memo[bTreeDate.number_of_node];
				bTreeDate.toSortedList();
				for (int i = 0 ; i < bTreeDate.number_of_node; i++) {
					memoList[i] = (Memo) bTreeDate.nodeList[i].element;
				}
			}
		}

		if (key instanceof String) {
			if (bTreeTitle.root != null) {
				memoList = new Memo[bTreeTitle.number_of_node];
				bTreeTitle.toSortedList();
				for (int i = 0 ; i < bTreeTitle.number_of_node; i++) {
					memoList[i] = (Memo) bTreeTitle.nodeList[i].element;
				}
			}
		}
		return memoList;
	}

	/**
	 * Calls the BinaryTree object to reverse the order of the trees.
	 */
	public void reverseOrder() {
		if (bTreeDate.root != null && bTreeDate.number_of_node > 1) {
			bTreeDate.reverseOrder();
			bTreeTitle.reverseOrder();
		}
	}
}
