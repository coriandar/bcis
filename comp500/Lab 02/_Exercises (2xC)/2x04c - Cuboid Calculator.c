#include <stdio.h>

int main(void)
{
	float length = 0.0f;
	float width = 0.0f;
	float height = 0.0f;
	float volume = 0.0f;

	printf("What is the length of the cuboid? ");
	scanf("%f", &length);

	printf("What is the width of the cuboid? ");
	scanf("%f", &width);
	
	printf("What is the height of the cuboid? ");
	scanf("%f", &height);

	volume = length * width * height;
	printf("\nThe cuboid's volume is: %.2f", volume);

	return 0;
}