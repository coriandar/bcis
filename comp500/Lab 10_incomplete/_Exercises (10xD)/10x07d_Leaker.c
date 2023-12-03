/*
// ERRORS
	Memory leaks
*/

#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

void fill_array(int* data, int size);
void print_array(int* data, int size);
int* resize_int_array(int size);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* memory = 0;
	int num_elements = -1;

	while (num_elements != 0)
	{
		printf("How big? ");
		scanf("%d", &num_elements);

		memory = resize_int_array(num_elements);
		fill_array(memory, num_elements);
		print_array(memory, num_elements);
		free(memory);
		memory = 0;
	}

	return 0;
}

void fill_array(int* data, int size)
{
	for (int k = 0; k < size; ++k)
	{
		data[k] = 0;
	}
}

void print_array(int* data, int size)
{
	for (int k = 0; k < size; ++k)
	{
		printf("%d ", data[k]);
	}
	printf("\n");
}

int* resize_int_array(int size)
{
	return malloc(size * sizeof(int));
}