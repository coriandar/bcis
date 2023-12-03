#include <stdio.h>

typedef int(*compare_func)(int, int);

void swap(int* p1, int* p2);

int ascending(const int a, const int b);
int descending(const int a, const int b);

void bubble(int* the_array, const int size, compare_func func);

void print_array(int* the_array, const int size);

int main(void)
{
	int data[] = { 2, 16, 4, 81, 1, 43, 12, 23, 50 };

	printf("Unsorted: ");
	print_array(data, 9);

	// TODO: 2) CALL bubble WITH data SORT ascending:
	//compare_func func = ascending;
	printf("Ascending Order: ");
	print_array(data, 9);

	// TODO: 3) CALL bubble WITH data SORT descending:
	//compare_func func = descending;
	printf("Descending Order: ");
	print_array(data, 9);

	return 0;
}

void bubble(int* the_array, const int size, compare_func func)
{
	for (int pass = 1; pass <= size; ++pass)
	{
		for (int count = 0; count <= size - 2; ++count)
		{
			// TODO: 1) Insert code here...
		}
	}
}

void swap(int* p1, int* p2)
{
	int temp = 0;


}

int ascending(const int a, const int b)
{

}

int descending(const int a, const int b)
{

}