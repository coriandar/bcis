#include <stdio.h>

int main(void)
{
	printf("Please enter an ASCII character: ");
	char input = '0';
	scanf(" %c", &input);

	printf("\n%c is %s.\n", input, (48 <= input && input <= 57) ? "a digit" : "not a digit");

	return 0;
}