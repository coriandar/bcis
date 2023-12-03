package MidTermExamRefactor;

enum Keyword {
	FOX,
	QUICK,
	LAZY,
	BROWN,
	CAT;
}

public class WordCounter {
	private String text;
	private int[] frequencies;

	public static void main(String[] args)
	{
		String sentence = "The lazy cat cat jumped over the quick brown fox fox";
		WordCounter keyword = new WordCounter(sentence);
		System.out.println(keyword);
	}
	
	/**
	 * Constructor
	 * */
	public WordCounter(String input) {
		setText(input);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		StringBuilder output = new StringBuilder();
		for(int i = 0; i < Keyword.values().length; i++) {
			output.append(Keyword.values()[i].name()+":"+getFrequencies()[i]+" ");
		}
		return output.toString();
	}
	
	/**
	 * Methods
	 * */
	public int[] keywordFrequencies() {
		String[] input = this.getText().split(" ");
		int[] keywordCounter = new int[Keyword.values().length];
		
		for(int i = 0; i < Keyword.values().length; i++) {
			for(int k = 0; k < input.length; k++) {
				if(Keyword.values()[i].name().equals(input[k].toUpperCase())) {
					keywordCounter[i]++;
				}
			}
		}
		return keywordCounter;
	}
	
	/**
	 * GetSet
	 * */
	public int[] getFrequencies() {
		return frequencies;
	}

	private void setFrequencies() {
		this.frequencies = keywordFrequencies();
	}
	
	public void setText(String text) {
		this.text = text;
		setFrequencies();
	}
	
	public String getText() {
		return text;
	}
}
