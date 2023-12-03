#include <stdio.h>

struct Cat
{
	char name[32];
	int age;
	float weight;
	float tail;
};

void print_space(int space);
void print_cat(struct Cat name);

int main(void)
{
	struct Cat whiskers;

	sprintf(whiskers.name, "Whiskers");
	whiskers.age = 7;
	whiskers.weight = 8.0f;
	whiskers.tail = 15.0f;

	print_cat(whiskers);

	return 0;
}

void print_cat(struct Cat name)
{
	printf("A cat...\n");
	printf("\n");

	printf("Name:");
	print_space(8);
	printf("%s\n", name.name);

	printf("Age:");
	print_space(9);
	printf("%d years old\n", name.age);

	printf("Weight:");
	print_space(6);
	printf("%.2f kg\n", name.weight);

	printf("Tail Length: ");
	printf("%.2f cm\n", name.tail);
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}