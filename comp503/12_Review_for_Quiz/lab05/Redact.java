package lab05;

public class Redact {
	private String text;
	
	public static void main(String[] args)
	{
		Redact t = new Redact("The secret sauce ingredients are: onions, carrots,"
				+ " garlic, whole tomatoes, salt, tomato paste and olive oil.");
		
		Redact redacted = t.redact(new String[] {"tomato", "secret", "dients"});
		System.out.println(redacted);
	}
	
	public Redact(String input) {
		this.text = input;
	}
	
	public String toString() {
		return this.text;
	}
	
	public Redact redact(String[] input) {
		String output = this.text;
		
		for (int i = 0; i < input.length; i++) {
			output = output.replaceAll(input[i], underscore(input[i]));
		}
		
		return new Redact(output);
	}
	
	public String underscore(String input) {
		StringBuilder output = new StringBuilder();
		
		for (int i = 0; i < input.length(); i++) {
			output.append("_");
		}
		
		return output.toString();
	}
	
}
