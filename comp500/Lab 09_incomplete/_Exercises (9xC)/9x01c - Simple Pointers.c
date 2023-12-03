#include <stdio.h>

int main(void)
{
	printf("Enter a value for x: ");
	int x = 0;
	scanf("%d", &x);

	int* y = &x;

	printf("The address of x is %p\n", &x);
	printf("The value of x is %d\n", x);
	printf("The address of y is %p\n", &y);
	printf("The value of y is %p\n", y);
	printf("The value of the variable the y points to is %d\n", *y);

	return 0;
}