/*
//LEARNT
https://stackoverflow.com/questions/17131863/passing-string-to-a-function-in-c-with-or-without-pointers
*/

#include <stdio.h>
#include <string.h>

enum Check
{
	NONE, // 0
	YELLOW, // 1
	RED, // 2
	BLUE, // 3
	ORANGE,
	VIOLET,
	GREEN,
	VALID, // 4
	INVALID // 5
};

enum Check colour_check_1 = NONE;
enum Check colour_check_2 = NONE;
enum Check input_check_1 = INVALID;
enum Check input_check_2 = INVALID;
enum Check mix_result = NONE;

void input_checker_1(char* colour_1);
void input_checker_2(char* colour_2);
void print_dupilcate(char* colour_1, char* colour_2);
void check_mix_result(void);
void print_mix_result(void);

int main(void)
{
	char colour_1[20];
	char colour_2[20];

	while (input_check_1 == INVALID)
	{
		printf("First colour\? ");
		scanf("%19s", &colour_1);

		input_checker_1(colour_1);
	}

	while (input_check_2 == INVALID)
	{
		printf("Second colour\? ");
		scanf("%19s", &colour_2);

		input_checker_2(colour_2);
	}

	if (strcmp(colour_1, colour_2) == 0)
	{
		print_dupilcate(colour_1, colour_2);
	}
	else
	{
		printf("\n");
		printf("%s and %s mix to make ", colour_1, colour_2);
		check_mix_result();
		print_mix_result();
		printf("\n");
	}

	return 0;
}

void print_mix_result(void)
{
	if (mix_result == ORANGE)
	{
		printf("Orange!");
	}
	else if (mix_result == GREEN)
	{
		printf("Green!");
	}
	else if (mix_result == VIOLET)
	{
		printf("Violet!");
	}
}

void check_mix_result(void)
{
	int sum = colour_check_1 + colour_check_2;

	if (sum == YELLOW + RED)
	{
		mix_result = ORANGE;
	}
	else if (sum == YELLOW + BLUE)
	{
		mix_result = GREEN;
	}
	else if (sum == BLUE + RED)
	{
		mix_result = VIOLET;
	}
}

void input_checker_1 (char* colour_1)
{
	if (strcmp(colour_1, "Yellow") == 0)
	{
		colour_check_1 = YELLOW;
		input_check_1 = VALID;
	}
	else if (strcmp(colour_1, "Red") == 0)
	{
		colour_check_1 = RED;
		input_check_1 = VALID;
	}
	else if (strcmp(colour_1, "Blue") == 0)
	{
		colour_check_1 = BLUE;
		input_check_1 = VALID;
	}
	else
	{
		printf("\n%s is not a valid primary colour!!!\n\n", colour_1);
		input_check_1 = INVALID;
	}
}

void input_checker_2(char* colour_2)
{
	if (strcmp(colour_2, "Yellow") == 0)
	{
		colour_check_2 = YELLOW;
		input_check_2 = VALID;
	}
	else if (strcmp(colour_2, "Red") == 0)
	{
		colour_check_2 = RED;
		input_check_2 = VALID;
	}
	else if (strcmp(colour_2, "Blue") == 0)
	{
		colour_check_2 = BLUE;
		input_check_2 = VALID;
	}
	else
	{
		printf("\n%s is not a valid primary colour!!!\n\n", colour_2);
		input_check_2 = INVALID;
	}
}

void print_dupilcate(char* colour_1, char* colour_2)
{
	if (strcmp(colour_1, colour_2) == 0)
	{
		printf("\n");
		printf("%s and ", colour_1);
		printf("%s ", colour_2);
		printf("is still %s!\n", colour_1);
	}
}