#include <stdio.h>
#include <math.h>

int main(void)
{
	int side = 0;

	printf("What is the length of one side? ");
	scanf("%d", &side);

	printf("\nThe square's perimeter is: %d\n", side * 4);
	printf("\nThe square's area is: %d", side*side);

	return 0;
}