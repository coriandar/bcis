/*
//DESIGN
Keep adding the last digit.

WHILE
	remainder = num mod 10
	sum = sum + remainder
	num = num / 10
ENDWHILE

*/
#include <stdio.h>

int main(void)
{
	printf("Enter a non-negative whole number: ");
	int num = 0;
	scanf("%d", &num);

	int remainder = 0;
	int sum = 0;

	while (num > 0)
	{
		remainder = num % 10;
		sum = sum + remainder;
		num = num / 10;
	}

	printf("\nThe sum of the digits is %d\n", sum);

	return 0;
}