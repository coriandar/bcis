#include <stdlib.h>
#include <stdio.h>

int compare_ints(const void *a, const void *b)
{
	return (*(int*) a - *(int*) b);
}

void print_array(int *data, int size)
{
	for (int k = 0; k < size - 1; ++k)
	{
		printf("%d, ", data[k]);
	}

	printf("%d\n", data[size - 1]);
}

int main(void)
{
	int nums[] = { 1, 7, 3, 9, 8, 5 };

	printf("Before Sorting: ");
	print_array(nums, 6);
	
	qsort(nums, 6, sizeof(int), compare_ints);
	
	printf("After Sorting: ");
	print_array(nums, 6);
	
	return 0;
}