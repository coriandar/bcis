#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	printf("How many int elements will you enter\? ");
	int size = 0;
	scanf("%d", &size);
	printf("\n");

	// dynamic malloc
	int* p_dynamic_array = 0;

	p_dynamic_array = malloc(sizeof(int) * size);

	for (int index = 0; index < size; index++)
	{
		printf("Element %d: ", index + 1);
		scanf("%d", &p_dynamic_array[index]);
	}

	printf("\nThe array stores the following values:\n\n");

	for (int index = 0; index < size; index++)
	{
		printf("%d", p_dynamic_array[index]);

		if (index < size - 1)
		{
			printf(",");
		}

		printf(" ");
	}

	printf("\n");

	free(p_dynamic_array);
	p_dynamic_array = 0;

	return 0;
}