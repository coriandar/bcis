#include <stdio.h>

int main(void)
{
	int test[5] = { 10, 20, 30, 40, 50 };
	
	// Dereferencing test gets the first element:
	int firstElementsValue = *test;
	
	// Accessing the first element with array notation:
	int firstElementsValueAgain = test[0];
	
	// Get the address of the first element:
	int* addressOfFirstElement = &test[0];
	
	// Get the address of the first element:
	
	int* addressOfFirstElementAgain = test;
	
	// The name of the array is the address of
	// the first element in the array!
	
	// Check the values at runtime...
	printf("firstElementsValue is ");
	printf("%d\n", firstElementsValue);
	printf("firstElementsValueAgain is ");
	printf("%d\n", firstElementsValueAgain);
	printf("addressOfFirstElement is ");
	printf("%p\n", addressOfFirstElement);
	printf("addressOfFirstElementAgain is ");
	printf("%p\n", addressOfFirstElementAgain);
	
	return 0;
}