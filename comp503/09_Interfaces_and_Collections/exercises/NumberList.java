package exercises;

import java.util.ArrayList;

public class NumberList {
	private ArrayList<Integer> numbers;
	
	/**
	 * Constructors
	 * */
	public NumberList(String numbers) {
		String[] numFromString = numbers.split(" ");
		ArrayList<Integer> numArray = new ArrayList<Integer>();
		for(int i = 0; i < numFromString.length; i++) {
			numArray.add(Integer.valueOf(numFromString[i]));
		}
		setNumbers(numArray);
	}
	
	public NumberList(ArrayList<Integer> numArray) {
		setNumbers(numArray);
	}
	
	public String toString() {
		StringBuilder output = new StringBuilder();
		
		for(int i = 0; i < this.numbers.size(); i++) {
			output.append(this.numbers.get(i));
		}
		
		return output.toString();
	}

	/**
	 * Methods
	 * */
	public int sum() {
		int sum = 0;
		for(int i = 0; i < numbers.size(); i++) {
			sum += numbers.get(i);
		}
		return sum;
	}
	
	public double average() {
		return this.sum() / (double)numbers.size();
	}
	
	public NumberList merge(NumberList input) {
		ArrayList<Integer> numberArray = new ArrayList<Integer>();
		for(int i = 0; i < this.numbers.size(); i++) {
			numberArray.add(this.numbers.get(i));
		}
		for(int i = 0; i < input.numbers.size(); i++) {
			numberArray.add(input.numbers.get(i));
		}
		return new NumberList(numberArray);
	}
	
	
	/**
	 * GetSetMethods
	 * */
	public ArrayList<Integer> getNumbers() {
		return numbers;
	}

	public void setNumbers(ArrayList<Integer> numbers) {
		this.numbers = numbers;
	}
}
