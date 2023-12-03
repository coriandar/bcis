#include <stdio.h>

struct Textbook
{
	char title[20];
	int pages;
	int chapters;
	int published;
	float weight;
};

void add_textbook_details(struct Textbook* name);
void print_textbook(struct Textbook* name);

int main(void)
{
	struct Textbook prog_java;
	struct Textbook* p_prog_java = &prog_java;

	add_textbook_details(p_prog_java);
	print_textbook(p_prog_java);

	return 0;
}

void add_textbook_details(struct Textbook* name)
{
	//with dot operator
	sprintf((*name).title, "How to program Java");
	(*name).pages = 1350;
	(*name).chapters = 12;
	(*name).weight = 790.52f;
	(*name).published = 2008;
}

void print_textbook(struct Textbook* name)
{
	printf("A textbook...\n");
	printf("\n");

	// with -> arrow operator
	printf("Title: %s\n", name->title);
	printf("Number of pages: %d pages\n", name->pages);
	printf("Number of chapters: %d chapters\n", name->chapters);
	printf("Weight: %.2f g\n", name->weight);
	printf("Year of publication: %d\n", name->published);
}