#include <stdio.h>

void fill_array(int input[10])
{
	for (int k = 0; k < 10; ++k)
	{
		input[k] = 0;
	}
}

void print_array(int input[10])
{
	for (int k = 0; k < 10; ++k)
	{
		printf("%d ", input[k]);
	}
	
	printf("\n\n");
}

int main(void)
{
	int data[10];
	int more_data[10];
	
	fill_array(data);
	fill_array(more_data);
	print_array(data);
	
	print_array(more_data);
	
	return 0;
}