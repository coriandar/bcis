#include <stdio.h>

int is_hex_digit(char input);

int main(void)
{
	printf("> ");
	char input = '\0';
	scanf(" %c", &input);

	printf("return: %d\n", is_hex_digit(input));

	return 0;
}

int is_hex_digit(char input)
{
	int hex_check = 0;

	if ('0' <= input && input <= '9')
	{
		hex_check = 1;
	}
	else if ('A' <= input && input <= 'E')
	{
		hex_check = 1;
	}

	return hex_check;
}