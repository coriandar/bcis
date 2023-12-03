package lab05;

public class StringCompute {

	private String str;
	
	public static void main(String[] args)
	{
		StringCompute t = new StringCompute("abba");
		System.out.println(t.isPalindrome());
		System.out.println(t.hasOnlyDigits());
		System.out.println(t.removeChar('a'));
		t.duplicate("abba");
		System.out.println(t);
	}
	
	public StringCompute(String input) {
		this.setStr(input);
	}
	
	public String toString() {
		return this.str;
	}
	
	public int countOccurances(char ch) {
		int count = 0;
		for (int i = 0; i < getStr().length(); i ++) {
			if (this.getStr().charAt(i) == ch) {
				count++;
			}
		}
		return count;
	}
	
	public boolean hasOnlyDigits() {
		for (int i = 0; i < getStr().length(); i ++) {
			if (!Character.isDigit(this.getStr().charAt(i))) {
				return false;
			}
		}
		return true;
	}
	
	public String removeChar(char ch) {
		String output = "";
		for (int i = 0; i < this.getStr().length(); i ++) {
			if (this.getStr().charAt(i) != ch) {
				output += this.getStr().charAt(i);
			}
		}
		return output;
	}
	
	public boolean isPalindrome() {
		return this.getStr().equals(reverseString());
	}
	
	public String reverseString() {
		StringBuilder reverseString = new StringBuilder();
		for (int i = this.getStr().length() - 1; i >= 0; i--) {
			reverseString.append(this.getStr().charAt(i));
		}
		return reverseString.toString();
	}
	
	public void duplicate(String s) {
		if(this.getStr().equals(s)) {
			this.setStr(s.toUpperCase() + s.toUpperCase());
		}
		else {
			this.setStr(s);
		}
	}

	/**
	 * getSetMethods
	 * */
	public String getStr() {
		return str;
	}

	public void setStr(String str) {
		this.str = str;
	}
}
