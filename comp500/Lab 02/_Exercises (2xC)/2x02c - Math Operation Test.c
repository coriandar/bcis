#include <stdio.h>

int main(void)
{
	// test with int first, then find way to go to float.
	//use float %.0f makes 5 / 9 = 1
	// no, float n_1f = n_1;
	int n_1 = 0;
	int n_2 = 0;
	float n_1f = 0.0f;
	float n_2f = 0.0f;

	printf("Math Operation Test:\n");
	printf("--------------------\n\n");

	printf("Please enter the first whole number: ");
	scanf("%d", &n_1);

	printf("Please enter the second whole number: ");
	scanf("%d", &n_2);

	printf("\nCalculating...\n\n");

	printf("%d + %d is %d\n\n", n_1, n_2, n_1 + n_2);
	printf("%d - %d is %d\n\n", n_1, n_2, n_1 - n_2);
	printf("%d * %d is %d\n\n", n_1, n_2, n_1 * n_2);

	printf("With integer division:\n\n");
	printf("%d / %d is %d\n\n", n_1, n_2, n_1 / n_2);

	// can multiply int by float.
	//n_1f = n_1 * 1.0f;
	//n_2f = n_2 * 1.0f;
	n_1f = n_1;
	n_2f = n_2;

	printf("With floating point division:\n\n");
	printf("%d / %d is %f\n\n", n_1, n_2, n_1f / n_2f);

	printf("The remainder of %d divided by %d is %d", n_1, n_2, n_1 % n_2);

	return 0;
}