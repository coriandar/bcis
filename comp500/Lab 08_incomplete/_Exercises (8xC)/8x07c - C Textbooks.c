#include <stdio.h>
#include <string.h>

// TODO: Declare a Book structure here:
typedef struct Book_Structure
{
	char title[100];
	char author[100];
	int pages;
	float price;
} Book;

void print_book_details(Book to_print);
void print_space(int spaces);

int main(void)
{
	char* titles[] =
	{
		"C Programming Language",
		"The C Answer Book",
		"Expert C Programming",
		"21st Century C",
		"Mastering Algorithms with C",
		"Practical C Programming",
		"Understanding and Using C Pointers",
		"C in a Nutshell",
		"C Primer Plus"
	};

	char* authors[] =
	{
		"Kernighan and Ritchie",
		"Tondo",
		"van der Linden",
		"Klemens",
		"Loudon",
		"Oualline",
		"Reese",
		"Prinz",
		"Prata"
	};

	int pages[9] =
	{
		272,
		208,
		353,
		408,
		562,
		456,
		226,
		824,
		1080
	};

	float price[9] =
	{
		49.08f,
		40.97f,
		39.55f,
		39.99f,
		15.32f,
		22.52f,
		32.33f,
		37.54f,
		47.99f
	};

	// TODO: Declare an array of books:
	Book programming_books[9];

	// TODO: Set the each book element in the array:

	for (int index = 0; index < 9; index++)
	{
		sprintf(programming_books[index].title, "%s", titles[index]);
		sprintf(programming_books[index].author, "%s", authors[index]);
		programming_books[index].pages = pages[index];
		programming_books[index].price = price[index];
	}

	// TODO: Iterate through each book in the array,
	// TODO: and call print_book_details for each book:

	for (int index = 0; index < 9; index++)
	{
		print_book_details(programming_books[index]);
	}

	return 0;
}

// TODO: Define the print_book_details function here:

void print_book_details(Book to_print)
{
	printf("-----------------------------------\n");
	print_space(1);
	printf("Title:");
	print_space(6);
	printf("%s\n", to_print.title);

	print_space(1);
	printf("Author(s):");
	print_space(2);
	printf("%s\n", to_print.author);

	print_space(1);
	printf("Page Count:");
	print_space(1);
	printf("%d pages\n", to_print.pages);

	print_space(1);
	printf("Price:");
	print_space(6);
	printf("$%.2f\n", to_print.price);
	printf("-----------------------------------\n");
}

void print_space(int spaces)
{
	for (int s = 0; s < spaces; s++, printf(" "));
}