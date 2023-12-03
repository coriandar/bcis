#include <stdio.h>

int main(void)
{
	// Create a local main variable named 'number'...
	// and store 47 in it:
	int number = 47;
	
	// Print out the variable's contents,
	// and the address of the variable:
	printf("number has a value of: %d\n", number);
	printf("number is stored at: %p\n", &number);
	printf("\n");
	
	// Create a local main variable named ptr_to_number...
	// of type int pointer...
	// and store the address of the variable 'number' in it:
	int* ptr_to_number = &number;
	
	// Print out the ptr_to_number's contents,
	// and then print out the data that ptr_to_number points to:
	printf("ptr_to_number has a value of: %p\n", ptr_to_number);
	printf("ptr_to_number points to: %d\n", *ptr_to_number);
	printf("\n");
	
	// Notice that ptr_to_number is stored somewhere too,
	// print out the address of ptr_to_number:
	printf("ptr_to_number has a value of: %p\n", &ptr_to_number);
	printf("\n");
	
	return 0;
}