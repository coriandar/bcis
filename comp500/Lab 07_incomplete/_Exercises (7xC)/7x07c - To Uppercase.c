#include <stdio.h>

enum Vaid
{
	VALID,
	INVALID
};

enum Vaid input_flag = INVALID;
const int TO_UPPER_DELTA = 32;

void check_if_lower(char input);
char to_upper(char input);

int main(void)
{
	printf("Input a character: ");
	char input = '\0';
	scanf(" %c", &input);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("Character output: %c\n", to_upper(input));


	return 0;
}

char to_upper(char input)
{
	check_if_lower(input);

	char output = '\0';

	if (input_flag == VALID)
	{
		output = input - TO_UPPER_DELTA;
	}

	return output;
}

void check_if_lower(char input)
{
	if ('a' <= input && input <= 'z')
	{
		input_flag = VALID;
	}
	else
	{
		input_flag = INVALID;
	}
}