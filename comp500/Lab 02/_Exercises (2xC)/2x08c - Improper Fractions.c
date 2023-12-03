#include <stdio.h>

int main(void)
{
	int numer = 0;
	int denom = 0;
	int mixed_whole = 0;
	int mixed_frac = 0;

	printf("Numerator: ");
	scanf("%d", &numer);

	printf("Denominator: ");
	scanf("%d", &denom);
	
	printf("\nComputing...\n\n");
	
	printf("The improper fraction %d / %d\n", numer, denom);

	mixed_whole = numer / denom;
	mixed_frac = numer % denom;
	printf("is equivalent to the mixed fraction %d and %d / %d", mixed_whole, mixed_frac, denom);

	return 0;
}