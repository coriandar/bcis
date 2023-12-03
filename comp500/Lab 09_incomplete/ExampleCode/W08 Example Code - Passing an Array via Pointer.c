#include <stdio.h>

void fill_array(int* p_first, int num_elements)
{
	for (int k = 0; k < num_elements; ++k)
	{
		p_first[k] = 0;
	}
}

void print_array(int* p_first, int num_elements)
{
	for (int k = 0; k < num_elements; ++k)
	{
		printf("%d ", p_first[k]);
	}
	
	printf("\n\n");
}

int main(void)
{
	int data[10];
	int more_data[15];
	int even_more_data[7];
	
	fill_array(data, 10);
	fill_array(more_data, 15);
	fill_array(even_more_data, 7);
	
	print_array(data, 10);
	print_array(more_data, 15);
	print_array(even_more_data, 7);
	
	return 0;
}