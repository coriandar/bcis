#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int example[3][3];
	
	// Fill the array with user input:
	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 3; ++y)
		{
			printf("Set %d, %d to? ", x, y);
			scanf("%d", &example[x][y]);
		}
	}
	
	printf("\n");
	
	// Print out the array:
	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 3; ++y)
		{
			printf("%3d ", example[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}