#include <stdio.h>

// Function Declarations (Prototypes):
void check_validity_and_prompt(int scan_result);
void clear_input_buffer(void);
int get_number_from_keyboard(void);
int is_char_newline(char to_test);
int is_input_valid(int scan_result);

// The main function definition:
int main(void)
{
	printf("Input a number: ");
	int number = get_number_from_keyboard();
	printf("Number is: %d\n", number);
	return 0;
}

void check_validity_and_prompt(int scan_result)
{
	if (!is_input_valid(scan_result))
	{
		printf("Please enter a number! Try again: ");
		clear_input_buffer();
	}
}

void clear_input_buffer(void)
{
	char bad_input = 0;
	while (!is_char_newline(bad_input))
	{
		scanf("%c", &bad_input);
	}
}

int get_number_from_keyboard(void)
{
	int number = 0;
	int scan_result = 0;
	
	while (!is_input_valid(scan_result))
	{
		scan_result = scanf("%d", &number);
		check_validity_and_prompt(scan_result);
	}
	return number;
}

int is_char_newline(char to_test)
{
	return (to_test == '\n');
}

int is_input_valid(int scan_result)
{
	return (0 != scan_result);
}












