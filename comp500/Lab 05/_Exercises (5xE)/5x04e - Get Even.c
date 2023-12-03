#include <stdio.h>

int main(void)
{
	int input = 0;

	do
	{
		printf("Input an even number: ");
		scanf("%d", &input);
	}
	while (input % 2 != 0);

	printf("Well done, that was an even number.\n");

	return 0;
}