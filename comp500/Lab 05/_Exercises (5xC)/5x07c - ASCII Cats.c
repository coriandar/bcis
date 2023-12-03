#include <stdio.h>

void print_cats(int cats);

int main(void)
{
	printf("How many cats do you own\? ");
	int cats = 0;
	scanf("%d", &cats);

	print_cats(cats);

	return 0;
}

void print_cats(int cats)
{
	for (int repeat = 0; repeat < cats; repeat++)
	{
		printf("\n");
		printf(" /\\_/\\\n");
		printf("( O.O )\n");
		printf(" > ^ <\n");
	}

	return;
}