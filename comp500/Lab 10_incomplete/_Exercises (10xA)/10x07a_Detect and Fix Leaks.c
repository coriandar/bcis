#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

int* create_array(int size);
void fill_array(int* p_array, int size);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	int* first_array = create_array(5);
	fill_array(first_array, 5);
	free(first_array);

	int* second_array = create_array(3);
	fill_array(second_array, 3);
	free(second_array);

	int* third_array = create_array(3);
	fill_array(third_array, 3);
	free(third_array);

	return 0;
}

int* create_array(int size)
{
	int* p_data = malloc(size * sizeof(int));

	return p_data;
}

void fill_array(int* p_array, int size)
{
	for (int k = 0; k < size; k++)
	{
		printf("Enter a value: ");
		scanf("%d", &(p_array[k]));
	}
}