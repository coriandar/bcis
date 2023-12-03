#include <stdio.h>

int main(void)
{
	//run first see what does.
	// modulus
	int a;
	int b;

	printf("Modulus Calculator\n\n");

	printf(">Numer to divide: ");
	scanf("%d", &a);
	printf(">Number to divide by: ");
	scanf("%d", &b);

	printf("\nThe remainder of %d %% %d = %d\n", a, b, a % b);

	return 0;
}