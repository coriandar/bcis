#include <stdio.h>

int main(void)
{
	printf("Sum of squares\n");
	printf("--------------\n\n");

	printf("Input x: ");
	int x = 0;
	scanf("%d", &x);

	printf("Input y: ");
	int y = 0;
	scanf("%d", &y);

	printf("Input z: ");
	int z = 0;
	scanf("%d", &z);

	int a = x * x;
	int b = y * y;
	int c = z * z;

	int result = a + b + c;
	printf("\nSum of %d^2 + %d^2 + %d^2 = %d\n", x, y, z, result);

	return 0;
}