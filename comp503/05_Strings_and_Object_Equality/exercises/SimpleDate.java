package exercises;

import java.util.Random;

public class SimpleDate {
	private int day;
	private int month;
	private int year;
	
	/**
	 * Method: constructor
	 * -----------------------------------------
	 * uses setDate method to set date
	 * */
	public SimpleDate (int day, int month, int year) {
		setDate(day, month, year);
	}
	
	/**
	 * Method: constructor default
	 * -----------------------------------------
	 * default values.
	 * */
	public SimpleDate() {
		this.setDay(11);
		this.setMonth(11);
		this.setYear(2011);
	}
	
	public String toString() {
		return this.getDay()+"/"+this.getMonth()+"/"+this.getYear();
	}
	
	/**
	 * Method: setDate
	 * -----------------------------------------
	 * uses get and set methods to set date.
	 * */
	public void setDate(int day, int month, int year) {
		this.setDay(day);
		this.setMonth(month);
		this.setYear(year);
	}
	
	/**
	 * Method: get set methods
	 * -----------------------------------------
	 * */
	public int getDay() {
		return day;
	}
	
	public void setDay(int day) {
		if(1 <= day && day <= 31) {
			this.day = day;			
		}
	}
	
	public int getMonth() {
		return month;
	}
	
	public void setMonth(int month) {
		if(1 <= month && month <= 12) {
			this.month = month;			
		}
	}
	
	public int getYear() {
		return year;
	}
	
	public void setYear(int year) {
		if(2000 <= year && year <= 2022) {			
			this.year = year;
		}
	}
}
