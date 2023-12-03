#include <stdio.h>

void print_prompt(void);
int is_letter(char input);

int main(void)
{
	print_prompt();
	char input = '\0';
	scanf(" %c", &input);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("%d", is_letter(input));

	return 0;
}

int is_letter(char input)
{
	int check = 0;

	if ('A' <= input && input <= 'Z')
	{
		check = 1;
	}
	else if ('a' <= input && input <= 'z')
	{
		check = 1;
	}

	return check;
}

void print_prompt(void)
{
	printf("> ");
}