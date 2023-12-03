#include <stdio.h>

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++, printf("\n"));
}

int main(void)
{
	/*
	[01. What is an address?]
		• &variable, where the value is stored in memory.

	[02. How do you get the address of a variable?]
		• &variable;

	[03. What is a pointer?]
		• A type of variable that stores a memory address, 
		• it will "point-to" a  location in memory.

	[04. How do you declare a pointer?]
		• int* p_variable;

	[05. How do you initialise a pointer?]
		• p_variable = &variable;

	[06. What is dereferencing?]
		• get the data that is stored at the address it points to.

	[07. What is a null pointer?]
		• Null pointer indicates that the pointer does not point to a location in memory. There is never data stored at address zero.

	[08. How do you get access to the data that a pointer points to?]
		• *p_variable

	[09. How do you find the address of the first element in an array?]
		• The name of an array is actually a pointer to the first element in the array!
		• int array[0] == array

	[10. How do you find the address of the last element in an array?]
		• sizeof(array) / sizeof(array[0])
	*/

	/*
	[11. Write a loop to iterate through an array from the first element to the last element, using pointers.]
	*/
	printf("Write a loop to iterate through an array from the first element to the last element, using pointers.\n");

	int num_array[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(num_array) / sizeof(num_array[0]);

	for (int current = 0; current < size; current++)
	{
		printf("%d ", *(num_array + current));
	}
	
	print_newline(2);

	/*
	[12. Write a loop to iterate through an array from the last element to the first element, using pointers.]
	*/

	printf("Write a loop to iterate through an array from the last element to the first element, using pointers.\n");

	int num_array2[] = { 1, 2, 3, 4, 5 };
	int size2 = sizeof(num_array2) / sizeof(num_array2[0]);

	for (int current = size2 - 1; current >= 0; current--)
	{
		printf("%d ", *(num_array2 + current));
	}

	print_newline(2);

	/*
	[13. What are the advantages to using pointers?]
		• Able to access value directly without copying.
		• Functions can access and modify value, no lifespan limit.
		• Better version of a global variable.

	[14. What are the disadvantages to using pointers?]
		• Maanagement of pointers.

	[15. What is a wild pointer?]
		• Delcared but not initialised.
		• To avoid, always ensure pointer has a valid value.
		• If address is not known, set pointer to null.

	[16. What is a dangling pointer?]
		• Once stored a valid address, but address has since become invalid.
		• Can happen if a function returns the address of a local variable to the caller. Scope. Lifespan. Local variables. Stack.

	[17. What is the difference between "pass-by-value" and "pass-by-reference"?]
		• pass-by-value:
			• value is copied into another location of memory.

		• pass-by-reference:
			• Use functions to directly modify values from main function memory.
			• Use to modify multiple values in one function, and return void.
	*/

	return 0;
}