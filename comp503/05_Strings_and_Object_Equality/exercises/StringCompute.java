package exercises;

public class StringCompute {
	private String str;
	
	public StringCompute(String inputString) {
		setStr(inputString);
	}

	public String toString() {
		return this.getStr();
	}
	
	/**
	 * returns the number of times the character ch appears in str
	 * */
	public int countOccurances(char ch) {
		int counter = 0;
		
		for(int i = 0; i < this.getStr().length(); i++) {
			if(getStr().charAt(i) == ch) {
				counter++;
			}			
		}
		return counter;
	}
	
	/**
	 * returns true if str only contains the characters ‘0’ to ‘9’ and false otherwise
	 * */
	public boolean hasOnlyDigits() {
		for(int i = 0; i < this.getStr().length(); i++) {
			if(Character.isDigit(getStr().charAt(i))) {
				return true;
			}
		}
		return false;
	}
	
	/**
	 * returns the string str with all occurrences of the character ch removed
	 * */
	public String removeChar(char ch) {
		StringBuilder charRemove = new StringBuilder();
		
		for(int i = 0; i < getStr().length(); i++) {
			if(getStr().charAt(i) != ch) {
				charRemove.append(getStr().charAt(i));
			}
		}
		return charRemove.toString();
	}
	
	/**
	 * checks if str is a palindrome (e.g. abba)
	 * */
	public boolean isPalindrome() {	
		return this.getStr().equals(reverseString());
	}

	/**
	 * reverses string
	 * */
	public String reverseString() {
		StringBuilder reverseString = new StringBuilder();
		
		for(int i = this.getStr().length() - 1; i >= 0; i--) {
			reverseString.append(this.getStr().charAt(i));
		}
		return reverseString.toString();
	}

	/**
	 * sets the str instance variable to s, but if s is equal to str then uppercase s and set str to s+s
	 * */
	public void duplicate(String s) {
		if(this.getStr().equals(s)) {
			this.setStr(s.toUpperCase() + s.toUpperCase());
		}
		else {
			this.setStr(s);
		}
	}
	
	/**
	 * Method: get set methods
	 * -----------------------------------------
	 * */
	public String getStr() {
		return str;
	}

	public void setStr(String str) {
		this.str = str;
	}
}
