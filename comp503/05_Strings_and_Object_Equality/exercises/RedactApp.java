package exercises;

public class RedactApp {

	public static void main(String[] args) {
		Redact testString = new Redact();
		String[] removeWords = {"tomato", "secret", "ol", "a"};
		Redact removed =  testString.redact(removeWords);

		System.out.println(removed);
	}

}
