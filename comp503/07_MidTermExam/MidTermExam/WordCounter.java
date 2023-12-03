package MidTermExam;

public class WordCounter {

	private String text;
	private int[] frequencies;
	
	public static void main(String[] args)
	{
		WordCounter sentence = new WordCounter("The lazy fox jumped over the quick brown quick brown lazy cat");
		System.out.println(sentence);
	}
	
	/**
	 * Constructor
	 * */
	public WordCounter(String input) {
		setText(input);
		this.frequencies = new int[5];
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		String output = "";
		
		for(int i = 0; i < Keyword.values().length; i++) {
			output += Keyword.values()[i];
			output += ":"+ frequencies[i]+" ";
		}
		
		return output;
	}
	
	private int[] keyWordFrequency() {
		String[] sentenceSplit = this.getText().split(" ");
		int[] keywordCounter = new int[5];
		
		for(int i = 0; i < Keyword.values().length; i++) {
//			System.out.println(Keyword.values()[i]);
			
			for(int k = 0; k < sentenceSplit.length; k++) {
				
				if(Keyword.values()[i].equals(sentenceSplit[k].toUpperCase())) {
					keywordCounter[i]++;
					
				}
			}
		}
		return keywordCounter;
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getText() {
		return text;
	}

	private void setFrequencies() {
		this.frequencies = keyWordFrequency();
	}
	
	public void setText(String text) {
		this.text = text;
		this.frequencies = keyWordFrequency();
		//counts the keywords
	}

	public int[] getFrequencies() {
		return frequencies;
	}
}
