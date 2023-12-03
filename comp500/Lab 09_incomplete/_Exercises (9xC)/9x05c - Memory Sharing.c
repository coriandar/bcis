#include <stdio.h>

void print_array(int* p_array, int num_elements);
void zero_out_array(int* p_array, int num_elements);

int main(void)
{
	int main_array[] = { 15, 24, 33, 42, 51 };

	// TODO: Insert code here...
	print_array(main_array, 5);
	zero_out_array(main_array, 5);
	print_array(main_array, 5);

	return 0;
}

void print_array(int* p_array, int num_elements)
{
	printf("print_array called:\n");

	// TODO: Insert code here...
	for (int current = 0; current < num_elements; current++)
	{
		printf("%d ", p_array[current]);
	}

	printf("\n");
}

void zero_out_array(int* p_array, int num_elements)
{
	printf("\n");
	printf("zero_out_array called:\n");

	// TODO: Insert code here...
	for (int current = 0; current < num_elements; current++)
	{
		*(p_array + current) = 0;
	}

	printf("\n");
}