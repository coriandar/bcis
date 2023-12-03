#include <stdio.h>

int main(void)
{
	FILE* p_file = fopen("simple.txt", "w");
	
	if (p_file)
	{
		fprintf(p_file, "This text is\n");
		fprintf(p_file, "written into\n");
		fprintf(p_file, "a text file\n");
		fprintf(p_file, "named simple.txt.\n");
		fclose(p_file);
	}
	
	return 0;
}