#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void write_bin(char* file, void* data, int sizeof_type, int size);
void read_bin(char* file, void* data, int sizeof_type, int size);

int main(void)
{
	srand(time(0));

	int array_numbers[100];

	for (int current = 0; current < 100; current++)
	{
		array_numbers[current] = rand() % 200 - 100;
	}

	write_bin("randoms.bin", array_numbers, sizeof(int), 100);

	/*
	// READ TEST
	int read_array[100];

	read_bin("randoms.bin", read_array, sizeof(int), 100);

	for (int index = 0; index < 100; ++index)
	{
		printf("%4d ", read_array[index]);

		if ((index + 1) > 1 && (index + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

	printf("\n");
	*/

	return 0;
}

void write_bin(char* file, void* data, int sizeof_type, int size)
{
	FILE* p_file = fopen(file, "wb");

	assert(p_file != NULL);

	if (p_file)
	{
		fwrite(data, sizeof_type, size, p_file);
		fclose(p_file);
	}
}

void read_bin(char* file, void* data, int sizeof_type, int size)
{
	FILE* p_file = fopen(file, "rb");

	assert(p_file != NULL);

	if (p_file)
	{
		fread(data, sizeof_type, size, p_file);
		fclose(p_file);
	}
}