package exercises;
import java.util.Scanner;

public class Book {
	String title;
	String author;
	int numberOfPages;
	
	public static void main(String[] args)
	{	
		Scanner scan = new Scanner(System.in);
		
		Book book = new Book();
		
		System.out.println("Please enter the title of the book");
		book.title = scan.nextLine();
		
		System.out.println("Please enter the author name");
		book.author = scan.nextLine();
		
		do {
			System.out.println("Please enter the number of pages");
			book.numberOfPages = scan.nextInt();
		} while (book.numberOfPages <= 0);
		
		System.out.print("The book title is: ");
		System.out.println(book.title);
		
		System.out.print("The book author is: ");
		System.out.println(book.author);
		
		System.out.print("The book has ");
		System.out.println(book.numberOfPages+" pages");
	}
}
