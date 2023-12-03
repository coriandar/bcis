#include <stdio.h>

int main(void)
{
	printf("Rows\? ");
	int rows = 0;
	scanf("%d", &rows);

	for (int i = 0; i < rows; i++)
	{
		printf("%swhite black white black white black white%s", (i % 2 == 0) ? "black " : "", (i % 2 == 0) ? "" : " black");
		printf("\n");
	}

	return 0;
}