#include <stdio.h>

int main(void)
{
	printf("Enter a non-negative whole number: ");
	int num = 0;
	scanf("%d", &num);

	printf("\n");

	int sum = 0;
	
	for (int current_num = 2; current_num <= num; current_num += 2)
	{
		printf("%d", current_num);
		if (current_num < num - 1)
		{
			printf(" + ");
		}
		else
		{
			printf(" is...");
		}
		sum = sum + current_num;
	}

	printf("\n\n%d\n", sum);

	return 0;
}