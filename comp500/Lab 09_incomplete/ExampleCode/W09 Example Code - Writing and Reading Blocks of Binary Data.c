#include <stdio.h>

void write_array_to_file(char* filename, void* data, int stride, int size)
{
	FILE* p_file = fopen(filename, "wb");
	if (p_file)
	{
		fwrite(data, stride, size, p_file);
		fclose(p_file);
	}
}

void read_array_from_file(char* filename, void* data, int stride, int size)
{
	FILE* p_file = fopen(filename, "rb");
	if (p_file)
	{
		fread(data, stride, size, p_file);
		fclose(p_file);
	}
}

int main(void)
{
	int whole_numbers[] = { 15, 22, 10, 3, 54, 101 };
	float real_numbers[] = { 1.5f, 2.2f, 1.0f, 3.0f, 5.4f };
	int read_wholes[6];
	float read_reals[5];
	
	printf("Writing array data to disk...\n");
	
	write_array_to_file("whole.bin", whole_numbers, sizeof(int), 6);
	write_array_to_file("real.bin", real_numbers, sizeof(float), 5);
	
	printf("Reading array data from disk...\n");
	
	read_array_from_file("whole.bin", read_wholes, sizeof(int), 6);
	read_array_from_file("real.bin", read_reals, sizeof(float), 5);
	
	printf("\n\n");
	
	for (int k = 0; k < 6; ++k)
	{
		printf("%d ", read_wholes[k]);
	}
	
	printf("\n\n");
	
	for (int k = 0; k < 5; ++k)
	{
		printf("%f ", read_reals[k]);
	}
	
	printf("\n\n");
	
	return 0;
}