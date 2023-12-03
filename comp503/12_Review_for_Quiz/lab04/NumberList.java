package lab04;

import java.util.Arrays;
import java.util.Random;

public class NumberList {
	private int[] nums;
	
	public static void main(String[] args)
	{
		NumberList t = new NumberList(10);
		System.out.println(t);
		System.out.println(t.getNumber(1));
		System.out.println(t.sub(0, 5));
		System.out.println(t.sub(0, 11));
	}
	
	/**
	 * constructor
	 * */
	public NumberList() {
		this.setNums(new int[10]);
	}
	
	public NumberList(int r) {
		this();
		Random rand = new Random();
		for (int i = 0; i < this.nums.length; i++) {
			nums[i] = rand.nextInt(r - 1);
		}
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return Arrays.toString(this.getNums());
	}
	
	/**
	 * methods
	 * */
	public int size() {
		return this.getNums().length;
	}
	
	public boolean valid(int i) {
		return 0 <= i && i < this.size();
	}
	
	public void update(int index, int value) {
		if (this.valid(index)) {
			this.nums[index] = value;
		}
	}
	
	public int min() {
		int min = this.nums[0];
		for (int i = 0; i < this.nums.length; i++) {
			if (min > nums[i]) {
				min = nums[i];
			}
		}
		return min;
	}
	
	public int max() {
		int max = this.nums[0];
		for (int i = 0; i < this.nums.length; i++) {
			if (max < nums[i]) {
				max = nums[i];
			}
		}
		return max;
	}
	
	public int nonZero() {
		int count = 0;
		for (int i = 0; i < this.nums.length; i++) {
			if (nums[i] == 0) {
				count++;
			}
		}
		return count;
	}
	
	public double average() {
		int sum = 0;
		for (int i = 0; i < this.nums.length; i++) {
			sum += nums[i];
		}
		return (double)sum / this.nums.length;
	}
	
	public int getNumber(int i) {
		return this.getNums()[i];
	}
	
	public void absolute() {
		for (int i = 0; i < this.nums.length; i++) {
			nums[i] = Math.abs(nums[i]);
		}
	}
	
	public void scale(int f) {
		for (int i = 0; i < this.nums.length; i++) {
			nums[i] = nums[i] * f;
		}
	}
	
	public NumberList sub(int startIndex, int endIndex) {
		NumberList output = new NumberList();
		if (this.valid(startIndex) && this.valid(endIndex)) {
			for (int i = startIndex; i < endIndex; i++) {
				output.getNums()[i] = this.nums[i];
			}
		}
		return output;
	}
	
	/**
	 * getSetMethods
	 * */
	public int[] getNums() {
		return nums;
	}

	public void setNums(int[] nums) {
		this.nums = nums;
	}
}
