#include <stdio.h>
#include <stdlib.h>

void save_text_file(char* filename)
{
	FILE* fp = fopen(filename, "w");
	fprintf(fp, "Saving this text to file...\n");
	fclose(fp);
}

char* load_text_file(char* filename)
{
	char* buffer = malloc(sizeof(char) * 80);
	FILE* fp = fopen(filename, "r");
	fscanf(fp, "%79[a-z0-9A-Z ]", buffer);
	fclose(fp);
	return buffer;
}

int main(void)
{
	save_text_file("example.txt");
	char* loaded = load_text_file("example.txt");
	printf("From file: %s\n", loaded);
	free(loaded);
	loaded = 0;
	return 0;
}