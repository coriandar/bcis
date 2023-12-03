package exercises;

public class WordScannerApp {
	
	public static void main(String[] args)
	{
		String input = "The quick brown fox jumps over the lazy cat dog";
		String[] inputSplit = input.split(" ");

		for(String word : inputSplit) {
			Boolean match = false;
			for(int i = 0; i < WordSplit.values().length; i++) {
				if(WordSplit.values()[i].name().equals(word.toUpperCase())) {
					WordSplit.values()[i].increaseCount();
					match = true;
//					break; are we allowed to use break?
				}
//				else if(i == WordSplit.values().length - 2) {
//					WordSplit.NONKEYWORD.increaseCount();
//				}
			}
			
			if(match == false) {
				WordSplit.NONKEYWORD.increaseCount();
			}
		}
		
		for(WordSplit check : WordSplit.values()) {
			System.out.println(check);
		}
	}
}
