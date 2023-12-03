#include <stdio.h>

int find_min_index(int* numbers, int length)
{
	// TODO: Insert your code here!
	int compare = *numbers;

	for (int index = 0; index < length; index++)
	{
		if (compare > numbers[index])
		{
			compare = numbers[index];
		}
	}

	return compare;
}

int main(void)
{
	int array1[] = { 1, 3, 5, 7, 9, 11 };
	int array2[] = { 2, -4, 6, -8, 10, -12, 14, -16, 4 };
	int array3[] = { 6, 4, 1, 4, 5, 3, 2 };

	printf("Min's index in array1 is: %d\n", find_min_index(array1, 6));
	printf("Min's index in array2 is: %d\n", find_min_index(array2, 9));
	printf("Min's index in array3 is: %d\n", find_min_index(array3, 7));

	return 0;
}