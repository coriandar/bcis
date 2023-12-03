#include <stdio.h>

int main(void)
{
	int input = 0;
	int sum = 0;

	do
	{
		printf("Enter a number (0 to stop): ");
		scanf("%d", &input);
		sum += input;
	}
	while (input != 0);

	printf("\nThe tally is: %d\n", sum);

	return 0;
}