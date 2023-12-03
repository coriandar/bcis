#include <stdio.h>
#include <string.h>

struct Book
{
	char title[32];
	char author[32];
};

void print_book(struct Book a_book)
{
	printf("%s by ", a_book.title);
	printf("%s\n", a_book.author);
}

void print_all_books(struct Book books[], int num_books)
{
	for (int k = 0; k < num_books; ++k)
	{
		print_book(books[k]);
	}
}

int main(void)
{
	struct Book shelf[10];
	
	strcpy(shelf[0].title, "Frankenstein");
	strcpy(shelf[0].author, "Mary Shelley");
	strcpy(shelf[1].title, "1984");
	strcpy(shelf[1].author, "George Orwell");
	strcpy(shelf[2].title, "War and Peace");
	strcpy(shelf[2].author, "Leo Tolstoy");
	strcpy(shelf[3].title, "Pride and Prejudice");
	strcpy(shelf[3].author, "Jane Austen");
	strcpy(shelf[4].title, "On the Road");
	strcpy(shelf[4].author, "Jack Kerouac");
	strcpy(shelf[5].title, "The Age of Innocence");
	strcpy(shelf[5].author, "Edith Wharton");
	strcpy(shelf[6].title, "Catch-22");
	strcpy(shelf[6].author, "Joseph Heller");
	strcpy(shelf[7].title, "Interview with the Vampire");
	strcpy(shelf[7].author, "Anne Rice");
	strcpy(shelf[8].title, "Lord of the Flies");
	strcpy(shelf[8].author, "William Golding");
	strcpy(shelf[9].title, "Little Women");
	strcpy(shelf[9].author, "Louisa Alcott");
	
	print_all_books(shelf, 10);
	
	return 0;
}