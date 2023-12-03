/*
//LEARNT
Create and write to text file.
Append text to file.
*/

#include <stdio.h>

void fprintf_triangle(int height, FILE* p_file);

int main(void)
{
	printf("Triangle's height\? ");
	int height = 0;
	scanf("%d", &height);

	FILE* p_file = 0;

	p_file = fopen("triangle.txt", "wt");

	fprintf_triangle(height, p_file);
	fprintf(p_file, "\n");
	
	fclose(p_file);

	// to append in text mode a= append, t = text
	p_file = fopen("triangle.txt", "at");

	height = 3;
	fprintf_triangle(height, p_file);
	fprintf(p_file, "\n");

	height = 2;
	fprintf_triangle(height, p_file);
	fprintf(p_file, "\n");

	fclose(p_file);

	printf("File written!\n");

	return 0;
}

void fprintf_triangle(int height, FILE* p_file)
{
	const int MAX_H = height;

	for (int row = 0; row < MAX_H; row++, height--)
	{
		for (int space = 0; space < height; space++)
		{
			fprintf(p_file, " ");
		}

		fprintf(p_file, "/");

		for (int inner = 0; inner < row * 2; inner++)
		{
			fprintf(p_file, "=");
		}

		fprintf(p_file, "\\");

		fprintf(p_file, "\n");
	}
}