#include <stdio.h>

int main(void)
{
	int input = 0;
	int count = 0;
	int sum = 0;
	int avg = 0;

	do
	{
		printf("Number (-1 to stop)\? ");
		scanf("%d", &input);
		sum = sum + input;
		count++;
	} while (input != -1);

	if (sum == -1)
	{
		printf("\nNo numbers input.\n");
	}
	else
	{
		count--;
		avg = (sum + 1) / count;

		printf("\nThe average of the %d number%s input is %d\n", count, (count == 1) ? "" : "s", avg);
	}

	return 0;
}