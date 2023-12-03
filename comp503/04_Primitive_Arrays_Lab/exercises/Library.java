package exercises;

public class Library {

	private Book[] books;
	//int defaults to zero
	private int currentIndex;
	
	//toString method override
	public String toString() {
		StringBuilder libraryContents = new StringBuilder("Contents of the library\n");
		
		for (int i = 0; i < this.getSize(); i++) {
			libraryContents.append(i + 1);
			libraryContents.append(". ");
			libraryContents.append(this.books[i]);
			libraryContents.append("\n");
		}
		
		return libraryContents.toString();
	}
	
	//constructor sets the size of the array
	public Library (int capacity) {
		
		if (capacity < 1) {
			this.books = new Book[3];
		}
		else {
			this.books = new Book[capacity];			
		}
	}
	
	//get size
	public int getSize() {
		return this.books.length;
	}

	public boolean addBook(Book newBook) {
		if (this.currentIndex < this.getSize()) {
			this.books[currentIndex] = newBook;
			this.currentIndex++;
			
			return true;
		}
		else {
			System.out.println("Library at maximum capacity");
			
			return false;
		}
	}
	
	public Book borrow(String title) {
		//create a new book
		Book borrowBook = new Book();
		
		for (int i = 0; i < this.getSize(); i++) {
			
			if (this.books[i].getTitle().equals(title)) {
				borrowBook = this.books[i];
				borrowBook.setBorrowed(true);
			}
		}
		
		return borrowBook;
	}


	

	

	
	
	
}
