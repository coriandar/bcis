#include <stdio.h>

int main(void)
{
	int num_1 = 0;
	int num_2 = 0;
	int num_x = 0;

	printf("Please enter a whole number: ");
	scanf("%d", &num_1);

	printf("Please enter another whole number: ");
	scanf("%d", &num_2);

	num_x = num_1 * num_2;
	printf("%d times %d is: %d", num_1, num_2, num_x);

	return 0;
}