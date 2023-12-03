#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("n\? ");
	scanf("%d", &n);
	printf("\n");

	//for as long as count is less than n, loop.
	for (int count = 1; count <= n; ++count)
	{
		printf("[%d] ", count);
	}

	return 0;
}