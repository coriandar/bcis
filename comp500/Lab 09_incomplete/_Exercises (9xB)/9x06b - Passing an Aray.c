#include <stdio.h>

void print_int_array(int* array, int size);
void print_newline(int newline);

int main(void)
{
	int numbers_1[] = { 5, 3, 14, 3, 2, 1, 8, 12, 0, 2, 7, 8 };
	int size = sizeof(numbers_1) / sizeof(numbers_1[0]);

	print_int_array(numbers_1, size);

	int numbers_2[] = { 6, 7, 8, 9, 5, 3, 14, 3, 2, 1, 8, 12, 0, 2, 7, 8 };
	size = sizeof(numbers_2) / sizeof(numbers_2[0]);
	print_int_array(numbers_2, size);

	int numbers_3[] = { 15, 20, 21, 6, 7, 8, 9, 5, 3, 14, 3, 2, 1, 8, 12, 0, 2, 7, 8 };
	size = sizeof(numbers_3) / sizeof(numbers_3[0]);
	print_int_array(numbers_3, size);

	return 0;
}

void print_int_array(int* array, int size)
{
	for (int index = 0; index < size; index++)
	{
		if (index == size - 1)
		{
			printf("%d", *(array + index));
		}
		else
		{
			printf("%d ; ", *(array + index));
		}
	}

	print_newline(2);
}

void print_newline(int newline)
{
	for (int line = 0; line < newline; line++, printf("\n"));
}