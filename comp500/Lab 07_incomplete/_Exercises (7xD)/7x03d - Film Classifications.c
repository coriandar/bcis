#include <stdio.h>

char get_rating(int age);
void print_report(char first, char last, int age);

int main(void)
{
	printf("First country code character\? ");
	char first = '\0';
	scanf(" %c", &first);

	printf("Second country code character\? ");
	char last = '\0';
	scanf(" %c", &last);

	printf("Viewer age\? ");
	int age = 0;
	scanf("%d", &age);

	print_report(first, last, age);

	return 0;
}

char get_rating(int age)
{
	char rating = '\0';

	if (0 <= age && age < 8)
	{
		rating = 'G';
	}
	else if (8 <= age && age < 14)
	{
		rating = 'P';
	}
	else if (14 <= age && age <= 17)
	{
		rating = 'M';
	}
	else if (17 < age)
	{
		rating = 'R';
	}
	else
	{
		rating = 'O';
	}

	return rating;
}

void print_report(char first, char last, int age)
{
	printf("\n");
	printf("%c%c ", first, last);
	printf("viewer age of %d ", age);
	printf("is rating classification ");
	printf("%c.", get_rating(age));
	printf("\n");
}