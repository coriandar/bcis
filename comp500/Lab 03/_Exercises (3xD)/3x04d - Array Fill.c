#include <stdio.h>
#include <string.h>

int main(void)
{
	int data[5];

	printf("Input five whole numbers in a comma separated list:\n");
	printf("> ");

	//scanf &d comma %d, follow that format.
	scanf("%d,%d,%d,%d,%d", &data[0], &data[1], &data[2], &data[3], &data[4]);

	printf("\nParsed 5 whole number(s) from the user.\n\n");

	// %p = addressof operator hexa, %d for deci, %data[0]
	printf("data[0] is stored at %p, and holds the value %d.\n", &data[0], data[0]);
	printf("data[1] is stored at %p, and holds the value %d.\n", &data[1], data[1]);
	printf("data[2] is stored at %p, and holds the value %d.\n", &data[2], data[2]);
	printf("data[3] is stored at %p, and holds the value %d.\n", &data[3], data[3]);
	printf("data[4] is stored at %p, and holds the value %d.\n", &data[4], data[4]);

	return 0;
}