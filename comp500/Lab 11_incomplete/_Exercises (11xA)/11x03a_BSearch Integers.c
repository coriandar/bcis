#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

void generate_seed(void);
void fill_array(int* array, int size);
void print_array(int* array, int size);
int compare(const void* x, const void* y);
void print_newline(int newline);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	generate_seed();

	/*
	int array_rand[25];
	int size = sizeof(array_rand) / sizeof(int);
	*/

	int size = 25;
	int* array_rand = 0;
	array_rand = malloc(sizeof(int) * size);
	

	fill_array(array_rand, size);

	printf("Sorted:");
	print_newline(2);

	qsort(array_rand, size, sizeof(int), compare);

	print_array(array_rand, size);

	int search_key = 0;

	print_newline(1);
	printf("Search key\? ");
	scanf("%d", &search_key);
	print_newline(1);

	int* item = 0;

	item = bsearch(&search_key, array_rand, size, sizeof(int), compare);

	if (item)
	{
		printf("%d ", search_key);
		printf("found at ");
		printf("%p\n", &search_key);
	}
	else
	{
		printf("%d not found!\n", search_key);
	}

	free(array_rand);

	return 0;
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++, printf("\n"));
}

int compare(const void* x, const void* y)
{
	int a = *(int*)x;
	int b = *(int*)y;
	int difference = a - b;

	return difference;
}

void print_array(int* array, int size)
{
	for (int index = 0; index < size; index++)
	{
		printf("[%2d] ", index);
		printf("at ");
		printf("%p ", array);
		printf("is ");
		printf("%d\n", array[index]);
	}
}

void fill_array(int* array, int size)
{
	for (int index = 0; index < size; index++)
	{
		array[index] = rand() % 100 + 1;
	}
}

void generate_seed(void)
{
	srand(time(0));
}