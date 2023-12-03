#include <stdio.h>

int main(void)
{
	int mb_limit = 1500;
	int mb_used = 0;

	printf("How many megabytes have you used thus far? ");
	scanf("%d", &mb_used);

	printf("\nYou have %d megabytes left!!!", mb_limit - mb_used);

	return 0;
}