package exercises;

import java.util.Random;
import java.lang.Math;

public class NumberList {

	private final int SIZE = 10;
	private int numberArray[] = new int[SIZE];
	
	//constructor all zero
	public NumberList() {
		//for loop sets all to 0
		//an int array defaults is zero, this can be blank.
		//for (int i = 0; i < this.size(); i++) {
		//	this.numberArray[i] = 0;
		//}
	}
	
	public NumberList(int r) {
		//for loop sets random based on input
		for (int i = 0; i < this.size(); i++) {
			this.numberArray[i] = genRandom(r);
		}
	}
	
	// generate random based on input
	public int genRandom(int range) {
		Random rand = new Random();
		
		//rand.nextInt(max - min) + min
		//i.e. 10 and -10
		//rand.nextInt(10 -- 10) +-10
		//rand.nextInt(10 + 10) - 10
		int randNum = rand.nextInt(range + range) - range;
		
		return randNum;
	}
	
	public String toString() {
		StringBuilder arrayAsString = new StringBuilder();
		
		for (int number : this.numberArray) {
			arrayAsString.append(number);
			arrayAsString.append(" ");
		}
		
		return arrayAsString.toString();
	}
	
	public int size() {
		return this.numberArray.length;
	}

	//checks if index is in range
	private boolean valid(int i) {
		return i < this.size();
	}
	
	//changes the value of index
	public void update(int index, int value) {
		if(this.valid(index))
		{
			this.numberArray[index] = value;
		}
	}
	
	public int min() {
		int min = this.getNumber(0);
		
		for (int i = 0; i < this.size(); i++) {
			if(min > this.numberArray[i]) {
				min = this.numberArray[i];
			}
		}

		return min;
	}
	
	public int max() {
		int max = this.getNumber(0);
		
		//for each loop
		for (int number : this.numberArray) {
			if (max < number) {
				max = number;
			}
		}
		
		return max;
	}
	
	public int nonZero() {
		int isNotZero = 0;
		
		for (int number : this.numberArray) {
			if (number > 0) {
				isNotZero++;
			}
		}
		
		return isNotZero;
	}
	
	public int sum() {
		int sum = 0;
		
		for (int number : this.numberArray) {
			sum += number;
		}
		
		return sum;
	}
	
	public double average() {
		return (double)this.sum() / (double) this.SIZE;
	}
	
	public int getNumber(int i) {
		int number = 0;
		
		if (valid(i)) {
			number =  this.numberArray[i];		
		}
		
		return number;
	}
	
	public void absolute() {
		for (int i = 0; i < this.size(); i++) {
			if (this.getNumber(i) < 0) {
				update(i, Math.abs(this.getNumber(i)));
			}
		}
	}
	
	public void scale(int factor) {
		for (int i = 0; i < this.size(); i++) {
			this.update(i, factor * this.getNumber(i));
		}
	}
	
	public NumberList sub(int startIndex, int endIndex) {
		//creates new 0 value list.
		NumberList subNumList = new NumberList();
		
		if ((0 <= startIndex)
				&& (startIndex <= size())
				&& (endIndex >= startIndex)
				&& (endIndex <= this.size())){
			
			for (int i = startIndex, j = 0; i <= endIndex; i++, j++) {
				subNumList.update(j, this.getNumber(i));
			}
		}
		
		return subNumList;
	}
}
