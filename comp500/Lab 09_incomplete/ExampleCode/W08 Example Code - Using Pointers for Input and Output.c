#include <stdio.h>

void analyse_data(int* data, int size, int* lowest, int* highest, float* average);

int main(void)
{
	int numbers[10];
	
	for (int k = 0; k < 10; ++k)
	{
		printf("Please enter number %d of 10: ", k + 1);
		scanf("%d", &numbers[k]);
	}
	
	int lowest = 0;
	int highest = 0;
	float average = 0.0f;
	
	analyse_data(numbers, 10, &lowest, &highest, &average);
	
	printf("\nLowest: %d", lowest);
	printf("\nHighest: %d", highest);
	printf("\nAverage: %f\n", average);
	
	return 0;
}

void analyse_data(int* data, int size, int* lowest, int* highest, float* average)
{
	*lowest = data[0];
	*highest = data[0];
	float sum = 1.0f * data[0];
	
	for (int k = 1; k < 10; ++k)
	{
		sum += data[k];
		
		if (*lowest > data[k])
		{
			*lowest = data[k];
		}
		
		if (*highest < data[k])
		{
			*highest = data[k];
		}
	}
	
	*average = sum / size;
}