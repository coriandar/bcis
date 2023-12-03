#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char digits[9] = "\0";
	printf("Input 8 digits or less: ");
	scanf("%8s", digits);

	printf("digits[0] is ASCII char: %c (%d)\n", digits[0], digits[0]);

	printf("digits[1] is ASCII char: %c (%d)\n", digits[1], digits[1]);

	printf("digits[2] is ASCII char: %c (%d)\n", digits[2], digits[2]);

	printf("digits[3] is ASCII char: %c (%d)\n", digits[3], digits[3]);

	printf("digits[4] is ASCII char: %c (%d)\n", digits[4], digits[4]);

	printf("digits[5] is ASCII char: %c (%d)\n", digits[5], digits[5]);

	printf("digits[6] is ASCII char: %c (%d)\n", digits[6], digits[6]);

	printf("digits[7] is ASCII char: %c (%d)\n", digits[7], digits[7]);

	printf("digits[8] is ASCII char: %c (%d)\n", digits[8], digits[8]);

	return 0;
}