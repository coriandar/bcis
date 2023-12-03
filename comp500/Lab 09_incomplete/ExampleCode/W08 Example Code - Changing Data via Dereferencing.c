#include <stdio.h>

int main(void)
{
	int number = 47;
	int* pointer = &number;
	
	printf("number has a value of: %d\n", number);
	printf("number is stored at: %p\n", &number);
	printf("\n");
	
	printf("pointer has a value of: %p\n", pointer);
	printf("pointer points to: %d\n", *pointer);
	printf("\n");
	
	printf("Changing number's data via pointer...\n\n");
	
	*pointer = 256;
	
	printf("number has a value of: %d\n", number);
	printf("number is stored at: %p\n", &number);
	printf("\n");
	
	printf("pointer has a value of: %p\n", pointer);
	printf("pointer points to: %d\n", *pointer);
	printf("\n");
	
	return 0;
}