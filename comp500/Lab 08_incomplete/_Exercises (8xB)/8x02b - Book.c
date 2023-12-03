#include <stdio.h>

struct Textbook
{
	char title[20];
	int pages;
	int chapter;
	float weight;
	int year;
};

void print_newline(int newline);
void print_textbook(struct Textbook prog_java);

int main(void)
{
	struct Textbook prog_java;

	sprintf(prog_java.title, "How to program Java");
	prog_java.pages = 1350;
	prog_java.chapter = 12;
	prog_java.weight = 790.52f;
	prog_java.year = 2008;

	print_textbook(prog_java);

	return 0;
}

void print_textbook(struct Textbook prog_java)
{
	printf("A textbook...");
	print_newline(2);

	printf("Title: ");
	printf("%s\n", prog_java.title);

	printf("Number of pages: ");
	printf("%d pages\n", prog_java.pages);

	printf("Number of chapters: ");
	printf("%d chapters\n", prog_java.chapter);

	printf("Weight: ");
	printf("%.2f g\n", prog_java.weight);

	printf("Year of publication: ");
	printf("%d\n", prog_java.year);
}

void print_newline(int newline)
{
	for (int line = 0; line < newline; line++)
	{
		printf("\n");
	}
}