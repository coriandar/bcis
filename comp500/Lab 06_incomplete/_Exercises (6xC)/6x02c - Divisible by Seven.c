#include <stdio.h>

int main(void)
{
	printf("Enter a whole number: ");
	int num = 0;
	scanf("%d", &num);

	int div_by_seven = 0;

	for (int count = 1; count <= num; count++)
	{
		if (count % 7 == 0)
		{
			div_by_seven++;
		}
	}

	printf("\n");
	printf("%d ", div_by_seven);
	printf("number%s ", (div_by_seven == 1) ? "" : "s");
	printf("between 1 and %d are", num);
	printf("\n");
	printf("divisible by seven with no remainder.");
	printf("\n");

	return 0;
}