#include <stdio.h>

void print_space(int space);

int main(void)
{
	printf("Hello");
	printf("\n");

	print_space(5);
	printf("Programming");
	printf("\n");

	print_space(16);
	printf("Students");
	printf("\n");

	return 0;
}

void print_space(int space)
{
	for (int rep = 0; rep < space; rep++, printf(" "));
}