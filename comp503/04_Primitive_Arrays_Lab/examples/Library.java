package examples;


public class Library 
{	

	private Book[] books;
	private int actualLength;

	public Book[] getBookList()
	{
		Book[] rBooks  = new Book[actualLength];
		for(int i=0;i<this.actualLength;i++)
		{
			rBooks[i] =  this.books[i];			
		}

		return rBooks;

	}


	public Library(int capacity)
	{
		this.books = new Book[capacity];
		this.actualLength=0;
	}


	@Override
	public String toString()
	{
		String output = "";
		for(int i=0;i<this.actualLength;i++)
		{
			Book b = this.books[i];		
			output+=b+"\n";
		}
		return output;
	}

	public Book getBook(String title)
	{
		for(Book b : this.books)
		{
			if(b.getTitle().equalsIgnoreCase(title))
			{			
				return b;
			}
		}
		return null;

	}


	public void updateTitle(String oldTitle,String newTitle)
	{		
		Book b = this.getBook(oldTitle);
		b.setTitle(newTitle);		
	}

	public void replaceTitle(String title,Book book)
	{
		for(int i=0;i<actualLength;i++)
		{
			if(this.books[i].getTitle().equals(title))
			{
				this.books[i] = book;
			}
		}
	}


	public void addBook(Book aBook)
	{
		if(this.actualLength < this.books.length)
		{
			this.books[this.actualLength] = aBook;
			this.actualLength++;
		}
		else
		{
			System.out.println("Capacity has been exceeded");
		}

	}

	public void removeBook(String title)
	{

		Book[] rBooks = new Book[this.books.length];
		int index = 0;		
		for(Book book : this.books)
		{
			if(book != null)
			{
				if(book.getTitle().equals(title)) 
				{	

					this.actualLength--;

				}
				else
				{
					rBooks[index] = book;
					index++;
				}
			}
		}
		this.books = rBooks;		
	}


	public static void main(String[] args) 
	{
		Book b1 = new Book("Programming 2 Notes","K. Johnson");
		Book b2 = new Book("Disquisitiones Arithmeticae","C.F. Gauss");
		Book b3 = new Book("The Big Sleep","R. Chandler");
		Book b4 = new Book("Nineteen Eighty-Four","G. Orwell");

		Library lib = new Library(10);
		lib.addBook(b1);		
		lib.addBook(b2);
		lib.addBook(b3);
		lib.addBook(b4);
		System.out.println(lib);
		lib.updateTitle(b1.getTitle(),"All new Programming 2 notes!");
		System.out.println(lib);

		lib.replaceTitle("The Big Sleep", new Book ("New Book","New Author"));

		lib.removeBook("All new Programming 2 notes!");

		System.out.println(lib);




	}











}
