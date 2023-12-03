package exercises;

public class Book {
	
	private String bookTitle;
	private String bookAuthor;
	private boolean bookBorrowed;
	
	//toString method override
	public String toString() {
		return this.getTitle()
				+ " By "
				+ this.getAuthor()
				+ " is borrowed: "
				+ this.borrowStatus();
	}
	
	//constructor
	public Book() {
		this.bookTitle = "";
		this.bookAuthor = "";
		this.bookBorrowed = false;
	}
	
	public Book(String title, String author) {
		this.bookTitle = title;
		this.bookAuthor = author;
		this.bookBorrowed = false;
	}
	
	//get methods
	public String getTitle() {
		return bookTitle;
	}
	
	public String getAuthor() {
		return bookAuthor;
	}
	
	public boolean getBorrowed() {
		return bookBorrowed;
	}
	
	public String borrowStatus() {
		String borrowStatus = "No";
		
		if(getBorrowed()) {
			borrowStatus = "Yes";
		}
		
		return borrowStatus;
	}
	
	//set methods
	public void setTitle(String title) {
		this.bookTitle = title;
	}
	
	public void setAuthor(String author) {
		this.bookAuthor = author;
	}
	
	public void setBorrowed (boolean borrowed) {
		this.bookBorrowed = borrowed;
	}
}
