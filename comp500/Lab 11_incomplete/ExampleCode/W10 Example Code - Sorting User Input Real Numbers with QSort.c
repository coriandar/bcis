
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int compare_floats(const void *a, const void *b)
{
	float fa = *(float*) a;
	float fb = *(float*) b;
	return (fa > fb ? 1 : -1);
}

void print_array(float *data, int size)
{
	for (int k = 0; k < size - 1; ++k)
	{
		printf("%.3f, ", data[k]);
	}

	printf("%.3f\n", data[size - 1]);
}

void get_user_input(float *data, int size)
{
	for (int k = 0; k < size; ++k)
	{
		printf("Input real number %d: ", k + 1);
		scanf("%f", &data[k]);
	}
}

int query_num_elements(void)
{
	int user_elements = 0;
	printf("How many real numbers need sorting? ");
	scanf("%d", &user_elements);
	return user_elements;
}

int main(void)
{
	float *nums = 0;
	
	int elements = query_num_elements();
	
	nums = malloc(sizeof(float) *elements);
	
	get_user_input(nums, elements);
	
	printf("Before Sorting: ");
	print_array(nums, elements);
	
	qsort(nums, elements, sizeof(float), compare_floats);
	
	printf("After Sorting: ");
	print_array(nums, elements);
	
	free(nums);
	nums = 0;
	
	return 0;
}