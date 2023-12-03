#include <stdio.h>

int main(void)
{
	char input = 'i';
	char base_10 = 'i';
	char base_16 = 'i';

	printf("Please input a letter, digit or symbol: ");
	scanf("%c", &input);

	base_10 = input;
	base_16 = input;

	printf("\nThe ASCII value for %c in base-10 is %d\n", input, base_10);
	printf("The ASCII value for %c in base-16 is 0x%x\n", input, base_16);

	return 0;
}