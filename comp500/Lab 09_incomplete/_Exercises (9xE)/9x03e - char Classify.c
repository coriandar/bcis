#include <stdio.h>

enum RESULT
{
	NO,
	YES
};

void print_result(enum RESULT to_print);
// TODO: Declare classify prototype:
void classify(char to_classify, enum RESULT* p_upper, enum RESULT* p_lower, enum RESULT* p_digit);

int main(void)
{
	char input = 0;
	printf("> ");
	scanf(" %c", &input);

	enum RESULT upper;
	enum RESULT* p_upper = &upper;

	enum RESULT lower;
	enum RESULT* p_lower = &lower;

	enum RESULT digit;
	enum RESULT* p_digit = &digit;

	// TODO: Call classify...
	classify(input, p_upper, p_lower, p_digit);

	printf("Input was lowercase: ");
	print_result(lower);
	printf("\n");
	printf("Input was uppercase: ");
	print_result(upper);
	printf("\n");
	printf("Input was digit: ");
	print_result(digit);
	printf("\n");

	return 0;
}

void print_result(enum RESULT to_print)
{
	if (to_print == YES)
	{
		printf("Yes");
	}
	else if (to_print == NO)
	{
		printf("No");
	}
}

// TODO: Define classify function:
void classify(char to_classify, enum RESULT* p_upper, enum RESULT* p_lower, enum RESULT* p_digit)
{
	if ('A' <= to_classify && to_classify <= 'Z')
	{
		*p_upper = YES;
		*p_lower = NO;
		*p_digit = NO;
	}
	else if ('a' <= to_classify && to_classify <= 'z')
	{
		*p_upper = NO;
		*p_lower = YES;
		*p_digit = NO;
	}
	else if ('a' <= to_classify && to_classify <= 'z')
	{
		*p_upper = NO;
		*p_lower = NO;
		*p_digit = YES;
	}
}