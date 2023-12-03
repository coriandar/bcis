package exercises;

public class Redact {
	private String text;
	
	/**
	 * Method: constructor
	 * */
	public Redact(String input) {
		setText(input);
	}
	
	/**
	 * Method: constructor, test
	 * */
	public Redact() {
		setText("The secret tomato sauce ingredients are: "
				+ "onions, carrots, garlic, whole tomatoes, "
				+ "salt, tomato paste and olive oil.");
	}

	public String toString() {
		return getText();
	}
	
	public Redact redact(String[] removeWords) {	
		String wordRemoved = this.getText().replaceAll(removeWords[0], wordRedact(removeWords[0]));
		
		for(int i = 1; i < removeWords.length; i++) {
			wordRemoved = wordRemoved.replaceAll(removeWords[i], wordRedact(removeWords[i]));
		}
		
		Redact redactText = new Redact(wordRemoved);
		
		return redactText;
	}
	
	private String wordRedact(String string) {
		StringBuilder replacedWith = new StringBuilder();
		for(int i = 0; i < string.length(); i++) {
			replacedWith.append("_");
		}
		
		return replacedWith.toString();
	}
	
	/**
	 * Method: get & set
	 * */
	public String getText() {
		return text;
	}

	public void setText(String text) {
		this.text = text;
	}
}
