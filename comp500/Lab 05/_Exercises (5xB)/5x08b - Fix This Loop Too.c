#include <stdio.h>

int main(void)
{
	int count = 1;

	while (count <= 10)
	{
		printf("%d... ", count);
		count++;
	}

	printf("\n\nTimer has reached 10!\n");

	return 0;
}