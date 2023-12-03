#include <stdio.h>
#include <math.h>

int main(void)
{
	float base = 0.0f;

	printf("Please enter a base: ");
	scanf("%f", &base);

	printf("\nThe powers of %.0f are:\n\n", base);

	printf("%.0f ^ 0 is %.0f\n", base, powf(base, 0.0f));
	printf("%.0f ^ 1 is %.0f\n", base, powf(base, 1.0f));
	printf("%.0f ^ 2 is %.0f\n", base, powf(base, 2.0f));
	printf("%.0f ^ 3 is %.0f\n", base, powf(base, 3.0f));
	printf("%.0f ^ 4 is %.0f\n", base, powf(base, 4.0f));
	printf("%.0f ^ 5 is %.0f\n", base, powf(base, 5.0f));
	printf("%.0f ^ 6 is %.0f\n", base, powf(base, 6.0f));
	printf("%.0f ^ 7 is %.0f\n", base, powf(base, 7.0f));
	printf("%.0f ^ 8 is %.0f\n", base, powf(base, 8.0f));

	return 0;
}