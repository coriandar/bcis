#include <stdio.h>

int main(void)
{
	//internals add up to 180 degrees.
	int ang_1 = 0;
	int ang_2 = 0;
	int ang_m = 0;

	printf("A triangle has three internal angles...\n\n");

	printf("Please enter the first angle: ");
	scanf("%d", &ang_1);

	printf("Please enter the second angle: ");
	scanf("%d", &ang_2);
	
	//ctrl+back = delete word
	printf("\nCalculating...\n\n");

	ang_m = 180 - (ang_1 + ang_2);
	printf("The third angle is: %d degrees", ang_m);

	return 0;
}