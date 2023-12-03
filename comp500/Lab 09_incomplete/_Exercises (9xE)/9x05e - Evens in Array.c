#include  <stdio.h>

int count_evens(int* array, int size)
{
	int evens = 0;

	for (int current = 0; current < size; current++)
	{
		if (array[current] % 2 == 0)
		{
			evens++;
		}
	}

	return evens;
}

int main(void)
{
	int test_data[] = { 5, 3, 2, 4, 1, 8, 10, 2, 7 };

	int size = sizeof(test_data) / sizeof(test_data[0]);

	int evens = count_evens(test_data, size);

	printf("Evens: %d\n", evens);

	return 0;
}