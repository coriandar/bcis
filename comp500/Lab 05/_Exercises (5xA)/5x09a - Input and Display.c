//DESIGN
//Use loop to change values in index in arrays.

//ISSUES
//does not validate input.
//messy.


#include <stdio.h>

int main(void)
{
	printf("Enter the required number of elements (Max 500): ");
	int numbers[500];
	int elements = 0;
	int index = 0;
	scanf("%d", &elements);

	printf("\nNow enter the %d elements of the array...\n\n", elements);

	for (index = 0; index < elements; index++)
	{
		printf("Set [%d] to: ", index);
		int value = 0;
		scanf("%d", &value);
		numbers[index] = value;
	}
	printf("\nThe elements in the array are:\n\n{ ");

	for (index = 0; index < elements - 1; index++)
	{
		printf("%d, ", numbers[index]);
	}
	printf("%d }\n", numbers[index]);

	return 0;
}