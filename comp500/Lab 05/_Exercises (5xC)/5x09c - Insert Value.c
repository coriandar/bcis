#include <stdio.h>

void print_newline(int newline);

int main(void)
{
	printf("Input total number of elements required: ");
	int max_elements = 0;
	scanf("%d", &max_elements);

	print_newline(1);
	int elements[100];

	for (int index = 0; index < max_elements; index++)
	{
		printf("Input element [%d]: ", index);
		scanf("%d", &elements[index]);
	}
	print_newline(1);

	printf("Before insertion:\n");
	for (int index = 0; index < max_elements; index++)
	{
		printf("Element [%d] is %d\n", index, elements[index]);
	}
	print_newline(1);

	printf("Input a new value to insert: ");
	int new_value = 0;
	scanf("%d", &new_value);
	print_newline(1);

	printf("Input where to insert the value %d: ", new_value);
	int insert_where = 0;
	scanf("%d", &insert_where);
	print_newline(1);

	for (int index = max_elements - 1; index >= insert_where; index--)
	{
		elements[index + 1] = elements[index];
	}
	elements[insert_where] = new_value;

	printf("After insertion:\n");
	for (int index = 0; index < max_elements + 1; index++)
	{
		printf("Element [%d] is %d\n", index, elements[index]);
	}
	print_newline(1);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}
}