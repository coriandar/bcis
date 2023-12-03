#include <stdio.h>

int main(void)
{
	int age = 0;

	printf("What is your age? ");
	scanf("%d", &age);

	// age++ doesn't work, ++age does.
	printf("\nNext year you will be %d.", ++age);

	return 0;
}