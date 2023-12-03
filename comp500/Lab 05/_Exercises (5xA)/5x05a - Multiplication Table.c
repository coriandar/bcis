#include <stdio.h>

int main(void)
{
	printf("Enter a whole number: ");
	int whole = 0;
	scanf("%d", &whole);

	printf("\nThe %d Times Table:\n", whole);
	printf("------------------\n\n");

	for (int multiply = 0; multiply <= 14; ++multiply)
	{
		printf("%d x %d = %d\n", multiply, whole, multiply*whole);
	}

	return 0;
}