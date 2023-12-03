#include <stdio.h>

float find_maximum(float num_1, float num_2, float num_3);

int main(void)
{
	printf("Enter number 1: ");
	float num_1 = 0.0f;
	scanf("%f", &num_1);

	printf("Enter number 2: ");
	float num_2 = 0.0f;
	scanf("%f", &num_2);

	printf("Enter number 3: ");
	float num_3 = 0.0f;
	scanf("%f", &num_3);

	float max_result = find_maximum(num_1, num_2, num_3);

	printf("Highest number is: %f\n", max_result);

	return 0;
}

float find_maximum(float num_1, float num_2, float num_3)
{
	float maximum = num_1;

	if (maximum < num_2)
	{
		maximum = num_2;
	}
	else if (maximum < num_3)
	{
		maximum = num_3;
	}

	return maximum;
}