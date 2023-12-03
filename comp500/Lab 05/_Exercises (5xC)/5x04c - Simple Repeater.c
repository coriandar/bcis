#include <stdio.h>

int main(void)
{
	printf("ASCII Symbol\? ");
	char symbol;
	scanf(" %c", &symbol);

	printf("Repeat Count\? ");
	int repeat;
	scanf("%d", &repeat);

	printf("\n");

	for (int print = 0; print < repeat; print++)
	{
		printf("%c ", symbol);
	}

	printf("\n");

	return 0;
}