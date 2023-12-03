#include <stdio.h>

int main(void)
{
	printf("> ");
	int num = 0;
	scanf("%d", &num);

	printf("\n");

	for (int multiply = 0; multiply <= 12; multiply++)
	{
		printf("%d x %d = %d\n", num, multiply, num * multiply);
	}

	return 0;
}