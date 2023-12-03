#include <stdio.h>

enum Character
{
	LOWERCASE,
	UPPERCASE,
	DIGIT,
	SOMETHING,
	NOTHING
};

enum Character type = NOTHING;

void check_type(char character);
void print_input_type(char character);

int main(void)
{
	printf("Press Ctrl-C to quit!\n");
	printf("---------------------\n");

	char character = '\0';

	while (1)
	{
		printf("Enter a character: ");
		scanf(" %c", &character);

		check_type(character);
		print_input_type(character);
	}

	return 0;
}

void check_type(char character)
{
	if (97 <= character && character <= 122)
	{
		type = LOWERCASE;
	}
	else if (65 <= character && character <= 90)
	{
		type = UPPERCASE;
	}
	else if (48 <= character && character <= 57)
	{
		type = DIGIT;
	}
	else
	{
		type = SOMETHING;
	}
}

void print_input_type(char character)
{
	printf("[%c] ", character);
	if (type == LOWERCASE)
	{
		printf("lowercase");
	}
	else if (type == UPPERCASE)
	{
		printf("uppercase");
	}
	else if (type == DIGIT)
	{
		printf("digit");
	}
	else if (type == SOMETHING)
	{
		printf("something else");
	}

	printf("\n");
	printf("\n");
}