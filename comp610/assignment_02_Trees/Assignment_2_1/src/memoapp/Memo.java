package memoapp;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 * @question 1.2 BinaryTreeMemoSort
 */
public class Memo {

	public Date date;
	public String title;
	public String message;

	/**
	 * Constructor takes in parameters to create a memo with date, title and message.
	 * 
	 * @param date, date of memo 
	 * @param title, title of memo
	 * @param message, message of memo
	 */
	public Memo(String date, String title, String message) {
		this.date = parseDate(date);
		this.title = title;
		this.message = message;
	}

	public String getTitle() {
		return this.title;
	}
	
	/**
	 * @return formatted string display contents of memo
	 */
	public String toString() {
		StringBuilder out = new StringBuilder();
		out.append(date.toString() + "\n");
		out.append(title + "\n");
		out.append(message + "\n");
		return out.toString();
	}

	/**
	 * Parses a date from string input.
	 * 
	 * @param stringDate, formatted string to parse date
	 * @return parsed date element
	 */
	private Date parseDate(String stringDate) {
		Date date = null;
		DateFormat dateFormat = new SimpleDateFormat("yyyy/MM/dd");
		try { date = dateFormat.parse(stringDate); }
		catch (ParseException ex) { System.out.println("ParseException: " + ex.getMessage()); }
		return date;
	}
}
