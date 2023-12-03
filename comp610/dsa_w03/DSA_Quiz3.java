package dsa_w03;

/**
 *
 * @author coriandar
 */
public class DSA_Quiz3 {

	public static void main(String[] args) {
		// TODO code app logic here
		String[] stringList = {"Hello", "Hello", "Data", "Structures", "and", "Algorithms", "Students"};
		LinkedSet<String> linkedSet = new LinkedSet();

		for (int i = 0; i < stringList.length; i++) {
			linkedSet.add(stringList[i]);
		}
		linkedSet.printList();
		System.out.println("Recursive:");
		System.out.println(linkedSet.contains("Studednts")); // recursive
		System.out.println(linkedSet.toString()); // recursive
		System.out.println(linkedSet.toStringReversely()); // recursive
		System.out.println(linkedSet.toStringReverselyChatGPT()); // recursive

		System.out.println("\nBasic:");
		System.out.println(linkedSet.containsBad("and"));
		System.out.println(linkedSet.toStringBad());
		System.out.println(linkedSet.toStringReverselyBad());
	}
}
