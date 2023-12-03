#include <stdio.h>

int main(void)
{
	float tup_vec[3];
	float scalar = 0.0f;

	printf("vx? ");
	scanf("%f", &tup_vec[0]);

	printf("vy? ");
	scanf("%f", &tup_vec[1]);

	printf("vz? ");
	scanf("%f", &tup_vec[2]);

	printf("\nv = < %f, %f, %f >\n\n", tup_vec[0], tup_vec[1], tup_vec[2]);

	printf("Scalar Multiplier? ");
	scanf("%f", &scalar);

	tup_vec[0] = tup_vec[0]*scalar;
	tup_vec[1] = tup_vec[1]*scalar;
	tup_vec[2] = tup_vec[2]*scalar;

	printf("\n%fv = < %f, %f, %f >\n", scalar, tup_vec[0], tup_vec[1], tup_vec[2]);

	return 0;
}