/*
// ERROR
	C4133
	'function': incompatible types - from 'float (__cdecl *)(const void *,const void *)' to '_CoreCrtNonSecureSearchSortCompareFunction'

	type' : incompatible types - from 'type1' to 'type2'
	This warning can be caused by trying to subtract two pointers of different types.

// DEBUG
	changed cast back to float.
*/


#include <stdio.h>
#include <stdlib.h>

int compare_small_large(const void* a, const void* b);
int compare_large_small(const void* a, const void* b);

int main(void)
{
	printf("How many\? ");
	float array_size = 0;
	scanf("%f", &array_size);
	printf("\n");

	float* p_sort_array = 0;
	p_sort_array = malloc(sizeof(float) * array_size);

	for (int index = 0; index < array_size; index++)
	{
		printf("[%d]\? ", index);
		scanf("%f", &p_sort_array[index]);

		if (index == array_size - 1)
		{
			printf("\n");
		}
	}

	printf("Sorted:\n");
	printf("\n");

	qsort(p_sort_array, array_size, sizeof(float), compare_small_large);


	for (int index = 0; index < array_size; index++)
	{
		printf("[%d] at ", index);
		printf("%p is ", &p_sort_array[index]);
		printf("%f\n", p_sort_array[index]);

		if (index == array_size - 1)
		{
			printf("\n");
		}
	}

	printf("Search key\? ");
	float search_key = 0.0f;
	scanf("%f", &search_key);
	printf("\n");

	float* item = 0;

	item = bsearch(&search_key, p_sort_array, array_size, sizeof(float), compare_small_large);

	if (item)
	{
		printf("%f ", search_key);
		printf("found at ");
		printf("%p\n", &search_key);
	}
	else
	{
		printf("%f not found!\n", search_key);
	}

	return 0;
}

int compare_small_large(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}


int compare_large_small(const void* a, const void* b)
{
	return (*(int*)b - *(int*)a);
}
