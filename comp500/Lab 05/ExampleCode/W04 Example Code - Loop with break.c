#include <stdio.h>

int main(void)
{
	float sum = 0.0f;
	int count = 0;
	int infinite_loop = 1;
	
	while (infinite_loop)
	{
		int input = 0;
		printf("Enter a whole number (0 to stop): ");
		scanf("%d", &input);
		if (0 == input)
		{
			break;
		}
		sum += input;
		++count;
		printf("Running total is %.0f.\n", sum);
	}
	
	printf("\nTotal is %.0f.\n", sum);
	float real_sum = sum;
	float average = real_sum / count;
	printf("Average is %.2f.\n", average);
	return 0;
}