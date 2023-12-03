#include <stdio.h>

int main(void)
{
	printf("Please enter a number: ");
	int num_1 = 0;
	scanf("%d", &num_1);

	printf("Please enter another number: ");
	int num_2 = 0;
	scanf("%d", &num_2);

	if (num_1 < num_2)
	{
		printf("\n%d is bigger than %d.\n", num_2, num_1);
	}
	else if (num_1 > num_2)
	{
		printf("\n%d is bigger than %d.\n", num_1, num_2);
	}
	else if (num_1 == num_2)
	{
		printf("\nThe number (%d) was entered twice.\n", num_1);
	}

	return 0;
}