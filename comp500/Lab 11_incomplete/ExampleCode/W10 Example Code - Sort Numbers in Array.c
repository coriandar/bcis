
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

typedef int(*compare_function)(const void *, const void *);

void print_array(int *num_array, int size);
int compare_ints_ascending(const void *a, const void *b);
int compare_ints_descending(const void *a, const void *b);

void number_analysis(int *numbers, int size, int *sum, int *min, int *max, float *average);

int main(void)
{
	srand((unsigned int) time(0));
	
	CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	int array_size = 0;
	char order_choice = 0;
	
	printf("How many elements to sort? ");
	scanf("%d", &array_size);
	
	printf("Sort in ascending or descending order(a/d)? ");
	scanf(" %c", &order_choice);
	
	int *numbers = malloc(sizeof(int) *array_size);
	
	for (int i = 0; i < array_size; ++i)
	{
		numbers[i] = (rand() % 1999) - 999;
	}

	printf("\nBEFORE SORTING: \n");
	print_array(numbers, array_size);
	compare_function compare = 0;
	
	if (order_choice == 'a')
	{
		compare = compare_ints_ascending;
	}
	else
	{
		// Default order is descending:
		compare = compare_ints_descending;
	}

	qsort(numbers, array_size, sizeof(int), compare);
	
	printf("\n\nAFTER SORTING: \n");
	print_array(numbers, array_size);
	printf("\n");
	
	int sum = 0;
	int min = 0;
	int max = 0;
	float avg = 0.0 f;
	
	number_analysis(numbers, array_size, &sum, &min, &max, &avg);
	
	printf("\n\nHere is some info about your array: \n");
	printf("Smallest number: %d\n", min);
	printf("Largest number: %d\n", max);
	printf("Total: %d\n", sum);
	printf("Average: %.2f\n", avg);
	
	return 0;
}

void print_array(int *num_array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}

		printf("[%+4d] ", num_array[i]);
	}
}

int compare_ints_ascending(const void *a, const void *b)
{
	int a_value = *(int*) a;
	int b_value = *(int*) b;
	return a_value - b_value;
}

int compare_ints_descending(const void *a, const void *b)
{
	int a_value = *(int*) a;
	int b_value = *(int*) b;
	return b_value - a_value;
}

void number_analysis(int *numbers, int size, int *sum, int *min,
	int *max, float *average)
{
	if (size <= 0)
	{
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		if (i == 0)
		{ *min = numbers[i];
			*max = numbers[i];
		}

		if (numbers[i]<*min)
		{ *min = numbers[i];
		}

		if (numbers[i] > *max)
		{ *max = numbers[i];
		}

		*sum += numbers[i];
	}

	*average = (float)(*sum) / size;
}




















