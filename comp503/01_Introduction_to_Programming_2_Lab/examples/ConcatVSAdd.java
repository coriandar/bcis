package examples;

public class ConcatVSAdd {
	/**
	* This class demonstrates order of operations and how
	* it affects the semantic meaning of the + operation:
	* string concatenation and addition
	*
	* */
	public static void main(String[] args){
		System.out .println("25 and 45 concatenated: "+25+45);
		System.out .println("25 and 45 added: "+(25+45));
	}
}
