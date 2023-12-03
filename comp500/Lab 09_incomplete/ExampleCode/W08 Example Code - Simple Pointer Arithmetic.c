#include <stdio.h>

int main(void)
{
	int data[] = { 25, 300, 120, 6 };
	int* pointer = 0;
	
	pointer = data;
	
	for (int k = 0; k < 4; ++k)
	{
		printf("Address of data[%d] is %p\n", k, pointer);
		printf("Value of data[%d] is %d\n", k, *pointer);
		printf("\n");
		pointer++;
	}
	
	return 0;
}