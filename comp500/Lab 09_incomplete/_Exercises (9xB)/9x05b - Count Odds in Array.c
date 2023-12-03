#include <stdio.h>

// TODO: Insert your function declaration here!
int count_odds(int* data_array, int size);

int main(void)
{
	int data_array_1[] = { 1, 3, 5, 7, 9, 11 };
	int data_array_2[] = { 2, -4, 6, -8, 10, -12, 14, -16 };
	int data_array_3[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	int result_1 = count_odds(data_array_1, 6);
	printf("data_array_1 has %d odd numbers.\n", result_1);

	int result_2 = count_odds(data_array_2, 8);
	printf("data_array_2 has %d odd numbers.\n", result_2);

	int result_3 = count_odds(data_array_3, 11);
	printf("data_array_3 has %d odd numbers.\n", result_3);

	return 0;
}

// TODO: Insert your function definition here!
int count_odds(int* data_array, int size)
{
	int odds = 0;

	for (int index = 0; index < size; index++)
	{
		
		if (*(data_array + index) % 2 != 0)
		{
			odds++;
		}

		/* Same as
		if (data_array[index] % 2 != 0)
		{
			odds++;
		}
		*/
	}

	return odds;
}