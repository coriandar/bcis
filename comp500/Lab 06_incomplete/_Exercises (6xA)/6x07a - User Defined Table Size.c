#include <stdio.h>

int main(void)
{
	printf("Width\? ");
	int width = 0;
	scanf("%d", &width);

	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);
	printf("\n");

	for (int row_current = 1; row_current <= height; row_current++)
	{
		for (int number_current = 1; number_current <= width; number_current++)
		{
			int result = number_current * row_current;
			printf("%3d ", result);
		}
		printf("\n");
	}

	return 0;
}