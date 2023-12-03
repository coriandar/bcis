/*
//DESIGN
	1. Read in first four bytes. (int)
	2. assign malloc for float array.
	3. fread file
	4. While reading file add
	5. divide total by (float)int.
	6. printf average.

// IMPLEMENTATION
	Write a program that can read in binary file.

// ERROR
	Was using fgetc read 404 float numbers.
	fgetc is each indiviual %c.

// DEBUG
	Asked, needed fread.

// LEARNT
	Use fread to read in blocks of data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <crtdbg.h>

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	FILE* p_file_bin = 0;
	
	p_file_bin = fopen("floatdata.bin", "rb");

	if (p_file_bin == NULL)
	{
		printf("Error, exiting program.\n");
		assert(p_file_bin != NULL);
		return 1;
	}

	int array_size = 0;
	int* p_array_size = &array_size;

	// 4 byte = sizeof(int)
	// fread reads a block of data in stream
	fread(p_array_size, sizeof(int), 1, p_file_bin);
	printf("Array Size: %d\n", *p_array_size);

	// Dynamically assign memory.
	// cast array_size to float.
	// should be 400 bytes.
	float dynamic_size = (sizeof(float) * (float)array_size);
	assert(dynamic_size == 400.0f);
	printf("Dynamic Heap Array Size: %.0f bytes.\n", dynamic_size);

	float* p_numbers = malloc(dynamic_size);

	fread(p_numbers, sizeof(float), *p_array_size, p_file_bin);

	float total = 0.0f;

	for (int index = 0; index < *p_array_size; index++)
	{
		total += p_numbers[index];
	}

	printf("Total: %f\n", total);
	printf("Average: %f\n", total / *p_array_size);

	free(p_numbers);

	fclose(p_file_bin);

	return 0;
}