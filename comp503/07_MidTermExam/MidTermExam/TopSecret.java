package MidTermExam;

public class TopSecret {
	private String text;
	
	public static void main(String[] args)
	{
		TopSecret sentence = new TopSecret("The secret tomato sauce ingredients are: onions, carrots, garlic, whole tomatoes, salt, tomato paste and olive oil.");
		String[] redactThis = {"tomato", "sauce", "garlic", "olive"};
		
		TopSecret redacted = sentence.redact(redactThis);
		
		System.out.println(redacted);
	}
	
	/**
	 * Constructor
	 * */
	public TopSecret(String text) {
		setText(text);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return getText();
	}
	
	/**
	 * Methods
	 * */
	public TopSecret redact(String[] arrayOfWords) {
		
		String original = this.getText();
		
		for(int i = 0; i < arrayOfWords.length; i++) {
			String redact = original.replaceAll(arrayOfWords[i], underscores(getSize(arrayOfWords[i])));
			original = redact;
		}
		
		TopSecret redacted = new TopSecret(original);
		return redacted;
	}
	
	private static String underscores(int numOfUnderscores) {
		String underscores = "";
		
		for(int i = 0; i < numOfUnderscores; i++) {
			underscores += "_";
		}
		
		return underscores;
	}
	
	public int getSize(String word) {
		return word.length();
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getText() {
		return text;
	}

	public void setText(String text) {
		this.text = text;
	}
}
