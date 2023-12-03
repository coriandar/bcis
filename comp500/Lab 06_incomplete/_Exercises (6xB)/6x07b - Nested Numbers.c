/*
//DESIGN
Repeat the print same amount as value.
*/

#include <stdio.h>

int main(void)
{
	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);
	
	printf("\n");

	for (int value = 1; value <= height; value++)
	{
		for (int repeat = 0; repeat < value; repeat++)
		{
			printf("%d", value);
		}
		
		printf("\n");
	}
	
	return 0;
}