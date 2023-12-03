#include <stdio.h>

int main(void)
{
	int width = 0;
	int height = 0;

	printf("Rectangle Calculator:\n");
	printf("---------------------\n\n");

	printf("What is the width of the rectangle? ");
	scanf("%d", &width);

	printf("What is the height of the rectangle? ");
	scanf("%d", &height);

	printf("\nThe rectangle's perimeter is: %d\n", (width*2)+(height*2));
	printf("The rectangle's area is: %d\n", (width*height));

	return 0;
}