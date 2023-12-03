#include <stdio.h>

int main(void)
{
	printf("Simple calculator:\n");
	printf("------------------\n\n");

	printf("Input left operand\? ");
	int left = 0;
	scanf("%d", &left);

	printf("Input right operand\? ");
	int right = 0;
	scanf("%d", &right);

	printf("Operation (+,-,*,/)\? ");
	char operation = '\0';
	scanf(" %c", &operation);

	int result = 0;
	if (operation == '+')
	{
		result = left + right;
	}
	else if (operation == '-')
	{
		result = left - right;
	}
	else if (operation == '*')
	{
		result = left * right;
	}
	else if (operation == '/')
	{
		result = left / right;
	}
	printf("\nThe result is %d.\n", result);

	return 0;
}