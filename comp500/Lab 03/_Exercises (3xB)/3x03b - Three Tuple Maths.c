#include <stdio.h>

int main(void)
{
	int array_1[3];
	int array_2[3];

	printf("First Array Setup...\n\n");
	printf("  Please enter the 1st value: ");
	scanf("%d", &array_1[0]);

	printf("  Please enter the 2nd value: ");
	scanf("%d", &array_1[1]);

	printf("  Please enter the 3rd value: ");
	scanf("%d", &array_1[2]);

	printf("\nFirst array is: { %d, %d, %d }\n\n", array_1[0], array_1[1], array_1[2]);

	printf("Second Array Setup...\n\n");
	printf("  Please enter the 1st value: ");
	scanf("%d", &array_2[0]);

	printf("  Please enter the 2nd value: ");
	scanf("%d", &array_2[1]);

	printf("  Please enter the 3rd value: ");
	scanf("%d", &array_2[2]);

	printf("\nSecond array is: { %d, %d, %d }\n\n", array_2[0], array_2[1], array_2[2]);
	
	printf("  C..a..l..c..u..l..a..t..i..n..g..\n\n");

	printf("Adding corresponding elements: { %d, %d, %d }\n\n", array_1[0] + array_2[0], array_1[1] + array_2[1], array_1[2] + array_2[2]);
	printf("Subtracting corresponding elements: { %d, %d, %d }\n\n", array_1[0] - array_2[0], array_1[1] - array_2[1], array_1[2] - array_2[2]);
	printf("Multiplying corresponding elements: { %d, %d, %d }\n\n", array_1[0] * array_2[0], array_1[1] * array_2[1], array_1[2] * array_2[2]);
	
	return 0;
}