package MidTermExamRefactor;

public class TopSecret {
	private String text;

	public static void main(String[] args)
	{
		String input = "Hello I like tomatoes cheese and olive oil.";
		String[] redactThis = new String[] {"tomatoes", "cheese", "oil"};
		
		TopSecret redacted = new TopSecret(input).redact(redactThis);
		System.out.println(redacted);
	}
	
	/**
	 * Constructor
	 * */
	public TopSecret(String input) {
		setText(input);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return this.getText();
	}
	
	/**
	 * Methods
	 * */
	public TopSecret redact(String[] redactThese) {
		String text = getText();
		
		for(int i = 0; i < redactThese.length; i++) {
			String redact = text.replaceAll(redactThese[i], underscore(getSize(redactThese[i])));
			text = redact;
		}
		TopSecret redacted = new TopSecret(text);
		return redacted;
	}
	
	public String underscore(int amount) {
		StringBuilder output = new StringBuilder();
		
		for(int i = 0; i < amount; i++) {
			output.append("_");
		}
		
		return output.toString();
	}
	
	public int getSize(String word) {
		return word.length();
	}
	
	/**
	 * GetSet
	 * */
	public String getText() {
		return text;
	}

	public void setText(String text) {
		this.text = text;
	}

}
