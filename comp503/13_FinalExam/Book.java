package finalExam;

import java.util.ArrayList;
import java.util.Collections;

public class Book implements Comparable<Book> {
	private String title;
	private String author;
	private boolean borrowed;
	
	public static void main(String[] args)
	{
		ArrayList<Book> books = new ArrayList<>();

		books.add(new Book("Harry Potter 1", "JK Row"));
		books.add(new Book("Fantastic Beasts 1", "JK Row"));
		books.add(new Book("Algorithms I", "Robert Sedgewick"));
		books.add(new Book("Algorithms II", "Robert Sedgewick"));
		books.add(new Book("Analysis of Algorithms", "Robert Sedgewick"));

		books.get(0).setBorrowed(true);
		books.get(4).setBorrowed(true);

		Collections.sort(books);

		for (int i = 0; i < books.size(); i++) {
			System.out.println(books.get(i));
		}
	}

	/**
	 * constructor
	 * */
	public Book(String title, String author) {
		setTitle(title);
		setAuthor(author);
		setBorrowed(false);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return this.getTitle() + " : " + this.getAuthor() + " : " + this.isBorrowed();
	}
	
	/**
	 * compareTo
	 * */
	@Override
	public int compareTo(Book o) {
		return this.getTitle().compareTo(o.getTitle());
	}
	
	/**
	 * getSetMethods
	 * */
	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public String getAuthor() {
		return author;
	}

	public void setAuthor(String author) {
		this.author = author;
	}

	public boolean isBorrowed() {
		return borrowed;
	}

	public void setBorrowed(boolean borrowed) {
		this.borrowed = borrowed;
	}
}

/**
Question: Book Data (25 marks)
	1. Private instance variables title, author, borrowStatus. Get set for all.
	
	2. Create a constructor that Book(String, String). Initialize all instance variables.
	
	3. toString() that returns information for all instance variables.
	
	4. Implements Comparable<Book>, that compares the titles.
	
	5. static void main. Create ArrayList<Book>. Populate with 5 books. Shwo functionality of all methods. Print contents of list. 
*/
