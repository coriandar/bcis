#include <stdio.h>

int main(void)
{
	printf("Begin at\? ");
	int start = 0;
	scanf("%d", &start);

	printf("End at\? ");
	int end = 0;
	scanf("%d", &end);

	printf("Step size\? ");
	int step = 0;
	scanf("%d", &step);

	printf("\n");

	for (int num = start; num <= end; num += step)
	{
		printf("%d", num);

		if (num < end - step + 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	return 0;
}