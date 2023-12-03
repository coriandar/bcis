#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);
void print_newline(int newline);
void fill_array(int* p_input);
void print_save_unsorted(int* p_input, FILE* file);
void print_save_sorted(int* p_input, FILE* file);

int main(void)
{
	printf("Please enter five integers:");
	print_newline(2);

	int input[5];
	int* p_input = input;

	fill_array(p_input);

	FILE* p_unsorted_file = fopen("unsorted.txt", "wt");
	print_save_unsorted(p_input, p_unsorted_file);
	fclose(p_unsorted_file);

	printf("Unsorted array has been ");
	printf("saved to the 'unsorted.txt' file.");
	print_newline(2);

	qsort(input, 5, sizeof(int), compare);

	FILE* p_sorted_file = fopen("sorted.txt", "wt");
	print_save_sorted(p_input, p_sorted_file);
	fclose(p_sorted_file);

	return 0;
}

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

void print_newline(int newline)
{
	for (int print = 0; print < newline; print++, printf("\n"));
}

void fill_array(int* p_input)
{
	for (int index = 0; index < 5; index++)
	{
		printf("Input %d: ", index + 1);
		scanf("%d", &p_input[index]);
	}

	print_newline(1);
}

void print_save_unsorted(int* p_input, FILE* file)
{
	printf("Array input was: { ");
	fprintf(file, "Array input was: { ");

	for (int index = 0; index < 5; index++)
	{
		printf("%d", p_input[index]);
		fprintf(file, "%d", p_input[index]);

		if (index <= 3)
		{
			printf(", ");
			fprintf(file, ", ");
		}
		else
		{
			printf(" }");
			fprintf(file, " }");
		}
	}

	print_newline(2);
}

void print_save_sorted(int* p_input, FILE* file)
{
	printf("Sorted is: { ");
	fprintf(file, "Sorted is: { ");

	for (int index = 0; index < 5; index++)
	{
		printf("%d", p_input[index]);
		fprintf(file, "%d", p_input[index]);

		if (index <= 3)
		{
			printf(", ");
			fprintf(file, ", ");
		}
		else
		{
			printf(" }");
			fprintf(file, " }");
		}
	}

	print_newline(2);
}