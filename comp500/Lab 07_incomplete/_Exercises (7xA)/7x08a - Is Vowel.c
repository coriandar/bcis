#include <stdio.h>

void print_newline(int newline);
int is_vowel(char input);

int main(void)
{
	printf("> ");
	char input;
	scanf(" %c", &input);

	printf("%d", is_vowel(input));
	print_newline(1);

	return 0;
}

void print_newline(int newline)
{
	for ( int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}

	return;
}

int is_vowel(char input)
{
	int check = -1;
	switch (input)
	{
	case 'A': //Fall through
	case 'a':
		check = 1;
		break;
	case 'E': //Fall through
	case 'e':
		check = 1;
		break;
	case 'I': //Fall through
	case 'i':
		check = 1;
		break;
	case 'O': //Fall through
	case 'o':
		check = 1;
		break;
	case 'U': //Fall through
	case 'u':
		check = 1;
		break;
	default:
		check = 0;
		break;
	}

	return check;
}