#include <stdio.h>

void fprint_top(int width, FILE* p_file);
void fprintf_body(int height, int width, FILE* p_file);
void fprintf_box(int width, int height, FILE* p_file);

int main(void)
{
	printf("Desired box width\? ");
	int width = 0;
	scanf("%d", &width);

	printf("Desired box height\? ");
	int height = 0;
	scanf("%d", &height);

	FILE* p_file = 0;

	p_file = fopen("asciibox.txt", "wt");
	fprintf_box(width, height, p_file);
	fclose(p_file);

	printf("The ASCI box has been printed to file.\n");

	return 0;
}

void fprintf_box(int width, int height, FILE* p_file)
{
	fprint_top(width, p_file);

	if (height > 1)
	{
		fprintf_body(height, width, p_file);
		fprint_top(width, p_file);
	}
}

void fprintf_body(int height, int width, FILE* p_file)
{
	for (int repeat = 0; repeat < height - 2; repeat++)
	{
		fprintf(p_file, "|");

		for (int space = 0; space < width - 2; space++)
		{
			fprintf(p_file, " ");
		}

		if (width > 1)
		{
			fprintf(p_file, "|");
		}

		fprintf(p_file, "\n");
	}
}

void fprint_top(int width, FILE* p_file)
{
	fprintf(p_file, "+");

	for (int dash = 0; dash < width - 2; dash++)
	{
		fprintf(p_file, "-");
	}

	if (width > 1)
	{
		fprintf(p_file, "+");
	}

	fprintf(p_file, "\n");
}