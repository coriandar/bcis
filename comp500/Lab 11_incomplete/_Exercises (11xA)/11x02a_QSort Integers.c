/*
// LEARNT
Implement qsort.
qsort uses callback
*/

#include <stdio.h>
#include <stdlib.h>

int compare_small_large(const void* a, const void* b);
int compare_large_small(const void* a, const void* b);

int main(void)
{
	printf("How many\? ");
	int array_size = 0;
	scanf("%d", &array_size);
	printf("\n");

	//create void pointer
	int* p_sort_array = 0;
	//malloc for variable array size
	p_sort_array = malloc(sizeof(int) * array_size);

	for (int index = 0; index < array_size; index++)
	{
		printf("[%d]\? ", index);
		scanf("%d", &p_sort_array[index]);

		if (index == array_size - 1)
		{
			printf("\n");
		}
	}

	printf("Sorted:\n");
	printf("\n");

	qsort(p_sort_array, array_size, sizeof(int), compare_small_large);
	//qsort(p_sort_array, array_size, sizeof(int), compare_large_small);

	for (int index = 0; index < array_size; index++)
	{
		printf("[%d] is ", index);
		printf("%d\n", p_sort_array[index]);

		if (index == array_size - 1)
		{
			printf("\n");
		}
	}

	return 0;
}

int compare_small_large(const void* a, const void* b)
{
	// cast void* to int*
	//int* pa = (int*)a;
	//int* pb = (int*)b;

	// dref, get value stored at *pa
	//int deref_a = *pa;
	//int deref_b = *pb;

	int deref_a = *(int*)a;
	int deref_b = *(int*)b;

	//small to large
	int difference = deref_a - deref_b;

	return difference;
}

int compare_large_small(const void* a, const void* b)
{
	//casts void* to int* then deref
	return (*(int*)b - *(int*)a);
}