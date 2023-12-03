#include <stdio.h>

int main(void)
{
	printf("Operator\? ");
	char operation = '\0';
	scanf(" %c", &operation);

	printf("Left Operand\? ");
	int left_op = 0;
	scanf("%d", &left_op);

	printf("Right Operand\? ");
	int right_op = 0;
	scanf("%d", &right_op);

	printf("\nComputing: %d %c %d\n", left_op, operation, right_op);

	int result = 0;
	switch (operation)
	{
	case '+':
		result = left_op + right_op;
		break;
	case '-':
		result = left_op - right_op;
		break;
	case '*':
		result = left_op * right_op;
		break;
	case '/':
		result = left_op / right_op;
		break;
	case '%':
		result = left_op % right_op;
		break;
	}

	printf("Result: %d\n", result);
	
	return 0;
}