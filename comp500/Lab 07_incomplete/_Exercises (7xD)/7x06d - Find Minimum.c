#include <stdio.h>

int find_minimum(int num_1, int num_2);

int main(void)
{
	printf("Enter first number: ");
	int num_1 = 0;
	scanf("%d", &num_1);

	printf("Enter second number: ");
	int num_2 = 0;
	scanf("%d", &num_2);

	int min_result = find_minimum(num_1, num_2);

	printf("Minimum is: %d\n", min_result);

	return 0;
}

int find_minimum(int num_1, int num_2)
{
	int lower = num_1;

	if (lower > num_2)
	{
		lower = num_2;
	}

	return lower;
}