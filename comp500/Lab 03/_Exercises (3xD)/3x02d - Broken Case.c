#include <stdio.h>

int main(void)
{
	char lower = 0;
	char upper = 0;

	printf("Input a lower case character: ");
	scanf("%c", &lower);
	printf("Input an upper case character: ");
	scanf(" %c", &upper);
	
	printf("\n");
	printf("lower %c equivalent upper is %c.\n", lower, upper);
	printf("upper %c equivalent lower is %c.\n", upper, lower);

	return 0;
}