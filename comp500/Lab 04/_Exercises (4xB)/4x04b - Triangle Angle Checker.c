#include <stdio.h>

int main(void)
{
	printf("Enter the first angle (in degrees): ");
	int first = 0;
	scanf("%d", &first);

	printf("Enter the second angle (in degrees): ");
	int second = 0;
	scanf("%d", &second);

	printf("Enter the third angle (in degrees): ");
	int third = 0;
	scanf("%d", &third);

	int sum = first + second + third;
	if (sum == 180 && first == 90 || second == 90 || third == 90)
	{
		printf("\n%d, %d, and %d is a valid right-angle triangle.\n", first, second, third);
	}
	else if (sum == 180)
	{
		printf("\n%d, %d, and %d is a valid triangle.\n", first, second, third);
	}
	else
	{
		printf("\n%d, %d, and %d is not a valid triangle.\n", first, second, third);
	}

	return 0;
}