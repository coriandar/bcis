#include <stdio.h>

int main(void)
{

	// scanf for, enter number 1,2,3
	// printf \n display those numbers in order then reversed.

	int number_1 = 0;
	int number_2 = 0;
	int number_3 = 0;

	printf("Please enter number 1: ");
	scanf("%d", &number_1);

	printf("Please enter number 2: ");
	scanf("%d", &number_2);

	printf("Please enter number 3: ");
	scanf("%d", &number_3);

	printf("\nYour numbers in entry order: \n");
	printf("%d \n", number_1);
	printf("%d \n", number_2);
	printf("%d \n", number_3);

	printf("\nYour numbers reversed: \n");
	printf("%d \n", number_3);
	printf("%d \n", number_2);
	printf("%d \n", number_1);

	return 0;
}