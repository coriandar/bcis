/*
// ERRORS
	The code to allocate the array on the heap has not yet been written;
	After deallocation, a dangling pointer is created.
	The heap allocated array leaks upon exiting the main function.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <crtdbg.h>

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int request = 0;
	printf("How many powers of two? ");
	scanf("%d", &request);

	float* p_array = 0;

	// TODO: Allocated heap array...
	p_array = malloc(sizeof(int) * request);

	// Generate and store the powers of two...
	for (int index = 0; index < request; index++)
	{
		p_array[index] = powf(2, index);
	}

	// Print out the array:
	for (int index = 0; index < request; index++)
	{
		printf("%f\n", p_array[index]);
	}

	free(p_array);
	p_array = 0;

	return 0;
}