#include <stdio.h>
#include <string.h>

enum Palin_Result
{
	YES,
	NO
};

void reverse_string(char* input, char* copy);
enum Palin_Result is_palindrome(char* input, char* copy);
void print_result(enum Palin_Result is_palin, char* input, char* copy);

int main(void)
{
	char input[32] = "hello";
	char* p_input = input;

	char copy[32] = "\0";
	char* p_copy = copy;

	enum Palin_Result is_palin = is_palindrome(p_input, p_copy);
	print_result(is_palin, p_input, p_copy);

	return 0;
}

void reverse_string(char* input, char* copy)
{
	int length = strlen(input) - 1;
	int index = 0;

	char temp[32] = "\0";

	for (int current = length; current >= 0; current--, index++)
	{
		temp[index] = input[current];
	}

	strcpy(copy, temp);
}

enum Palin_Result is_palindrome(char* input, char* copy)
{
	enum Palin_Result is_palin;

	reverse_string(input, copy);

	int compare = strcmp(copy, input);

	if (compare == 0)
	{
		is_palin = YES;
	}
	else
	{
		is_palin = NO;
	}

	return is_palin;
}

void print_result(enum Palin_Result is_palin, char* input, char* copy)
{
	printf("%s in reverse is: ", input);
	printf("%s\n", copy);

	if (is_palin == YES)
	{
		printf("Therefore, it is a palindrome\n");
	}
	else if (is_palin == NO)
	{
		printf("Therefore, it is not a palindrome\n");
	}

	printf("\n");
}