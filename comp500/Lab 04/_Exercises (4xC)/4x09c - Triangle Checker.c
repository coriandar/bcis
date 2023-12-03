#include <stdio.h>

int main(void)
{
	printf("Enter the first side length: ");
	int first = 0;
	scanf("%d", &first);

	printf("Enter the second side length: ");
	int second = 0;
	scanf("%d", &second);

	printf("Enter the third side length: ");
	int third = 0;
	scanf("%d", &third);

	if (first == second && first == third)
	{
		printf("\nThis is an equilateral triangle.\n");
	}
	else if (first == second && first != third)
	{
		printf("\nThis is an isosceles triangle.\n");
	}
	else if (first == third && first != second)
	{
		printf("\nThis is an isosceles triangle.\n");
	}
	else if (first != second && second == third)
	{
		printf("\nThis is an isosceles triangle.\n");
	}
	else
	{
		printf("\nThis is a scalene triangle.\n");
	}

	return 0;
}