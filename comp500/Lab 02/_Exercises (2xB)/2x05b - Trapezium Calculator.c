#include <stdio.h>

int main(void)
{
	//used int, need float
	float base_1 = 0.0f;
	float base_2 = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	printf("What is the length of the trapezium's first base? ");
	// scanf creates new line.
	scanf("%f", &base_1);
	
	printf("What is the length of the trapezium's second base? ");
	scanf("%f", &base_2);

	printf("What is the height of the trapezium? ");
	scanf("%f", &height);

	area = 0.5f*(base_1 + base_2)*height;
	printf("\nThe trapezium's area is: %.2f", area);

	return 0;
}