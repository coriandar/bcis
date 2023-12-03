#include <stdio.h>

enum Vaid
{
	VALID,
	INVALID
};

enum Vaid input_flag = INVALID;
const int TO_LOWER_DELTA = 32;

void check_if_upper(char input);
char to_lower(char input);

int main(void)
{
	printf("Input a character: ");
	char input = '\0';
	scanf(" %c", &input);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("Character output: %c\n", to_lower(input));
	

	return 0;
}

char to_lower(char input)
{
	check_if_upper(input);

	char output = '\0';

	if (input_flag == VALID)
	{
		output = input + TO_LOWER_DELTA;
	}

	return output;
}

void check_if_upper(char input)
{
	if ('A' <= input && input <= 'Z')
	{
		input_flag = VALID;
	}
	else
	{
		input_flag = INVALID;
	}
}