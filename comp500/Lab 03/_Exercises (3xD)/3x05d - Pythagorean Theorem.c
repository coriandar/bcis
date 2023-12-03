#include <stdio.h>
#include <math.h>

int main(void)
{
	float adj = 0.0f;
	float opp = 0.0f;
	float hyp = 0.0f;

	printf("Enter the length of the adjacent side: ");
	scanf("%f", &adj);

	printf("Enter the length of the opposite side: ");
	scanf("%f", &opp);

	hyp = sqrtf(powf(adj, 2) + powf(opp, 2));
	printf("\nThe hypotenuse is %f in length.\n\n", hyp);

	printf("          +\n");
	printf("          |\\\n");
	printf("          | \\\n");
	printf(" %f |  \\  %f\n", opp, hyp);
	printf("          |   \\\n");
	printf("          |    \\\n");
	printf("          +-----+\n");
	printf("          %f\n\n", adj);

	printf("Note: Right-angle triangle is not drawn to scale!\n\n");

	return 0;
}