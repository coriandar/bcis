#include <stdio.h>

int main(void)
{
	int integer[7];
	int sum_array = 0;

	printf("Please enter seven integers:\n\n");

	printf("Input 1: ");
	scanf("%d", &integer[0]);

	printf("Input 2: ");
	scanf("%d", &integer[1]);

	printf("Input 3: ");
	scanf("%d", &integer[2]);

	printf("Input 4: ");
	scanf("%d", &integer[3]);

	printf("Input 5: ");
	scanf("%d", &integer[4]);

	printf("Input 6: ");
	scanf("%d", &integer[5]);

	printf("Input 7: ");
	scanf("%d", &integer[6]);

	printf("\nArray input was: { %d, %d, %d, %d, %d, %d, %d }\n\n", integer[0], integer[1], integer[2], integer[3], integer[4], integer[5], integer[6]);

	sum_array = integer[0] + integer[1] + integer[2] + integer[3] + integer[4] + integer[5] + integer[6];
	printf("The sum of the array elements is: %d\n\n", sum_array);

	return 0;
}