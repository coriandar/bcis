#include <stdio.h>

int main(void)
{
	printf("Please enter a whole number: ");
	int num = 0;
	scanf("%d", &num);

	printf("\n%d is %s.\n", num, (num % 2 == 0) ? "even" : "odd");

	return 0;
}