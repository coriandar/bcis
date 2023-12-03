#include <stdio.h>

int is_digit(char input);

int main(void)
{

	printf("> ");
	char input = '\0';
	scanf(" %c", &input);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("%d", is_digit(input));

	return 0;
}

int is_digit(char input)
{
	if ('0' <= input && input <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}