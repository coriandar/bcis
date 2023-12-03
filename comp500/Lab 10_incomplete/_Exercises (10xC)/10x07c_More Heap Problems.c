/*
// ERROR
	The array allocated on the heap is too small.
	The array allocated on the heap leaks when the program exists.
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

	int* p_array = malloc(sizeof(int) * request);

	// Generate and store the powers of two...
	for (int k = 0; k < request; ++k)
	{
		p_array[k] = powf(2, k);
	}

	// Print out the array:
	for (int k = 0; k < request; ++k)
	{
		printf("%d ", p_array[k]);
	}
	printf("\n");

	free(p_array);
	p_array = 0;

	return 0;
}