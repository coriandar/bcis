/*
//LEARNT
name of array is actually pointer to first element.
Pointer arithematic.
*/

#include <stdio.h>

void sort_array(int* pointer, int array_size);
void print_array(int* pointer, int array_size);

int main(void)
{
	int data[7] = { 9, 2, 7, 1, 8, 4, 5 };
	int array_size = sizeof(data) / sizeof(data[0]);

	print_array(data, array_size);
	sort_array(data, array_size);
	print_array(data, array_size);
	printf("\n");

	//delete below
	int data2[8] = { 9, 2, 7, 1, 8, 4, 5, 8 };
	array_size = sizeof(data2) / sizeof(data2[0]);
	print_array(data2, array_size);
	sort_array(data2, array_size);
	print_array(data2, array_size);
	printf("\n");
	int data3[9] = { 9, 2, 7, 1, 8, 4, 5, 0, 11 };
	array_size = sizeof(data3) / sizeof(data3[0]);
	print_array(data3, array_size);
	sort_array(data3, array_size);
	print_array(data3, array_size);
	printf("\n");
	int data4[11] = { 9, 2, 7, 1, 8, 4, 5, 0, 11, 12, 13 };
	array_size = sizeof(data4) / sizeof(data4[0]);
	print_array(data4, array_size);
	sort_array(data4, array_size);
	print_array(data4, array_size);
	printf("\n");
	int data5[12] = { 9, 2, 7, 1, 8, 4, 5, 0, 11, 12, 13, 15 };
	array_size = sizeof(data5) / sizeof(data5[0]);
	print_array(data5, array_size);
	sort_array(data5, array_size);
	print_array(data5, array_size);
	printf("\n");

	return 0;
}

void sort_array(int* pointer, int array_size)
{
	int temp = 0;
	int previous = 0;

	for (int index = 0; index < array_size; index++)
	{
		temp = *(pointer + index);
		previous = index - 1;

		while (temp < *(pointer + previous) && previous >= 0)
		{
			*(pointer + previous + 1) = *(pointer + previous);
			previous = previous - 1;
		}

		*(pointer + previous + 1) = temp;
	}
}

void print_array(int* pointer, int array_size)
{
	for (int index = 0; index < array_size; index++)
	{
		printf("%d, ", *(pointer + index));
	}

	printf("\n");
}