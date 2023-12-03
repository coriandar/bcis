#include <stdio.h>
#include <math.h>

int main(void)
{
	float opp_side = 0.0f;
	float adj_side = 0.0f;
	float hypotenuse = 0.0f;

	printf("What is the length of the opposite side? ");
	scanf("%f", &opp_side);

	printf("What is the length of the adjacent side? ");
	scanf("%f", &adj_side);

	hypotenuse = sqrtf((powf(adj_side, 2.0f)) + (powf(opp_side, 2.0f)));

	printf("\nThe length of the hypotenuse is: %f", hypotenuse);

	return 0;
}