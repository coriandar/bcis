#include <stdio.h>

float dot_product(float v1[3], float v2[3]);

int main(void)
{
	float vec_a[3] = { 1.5f, 2.5f, 3.5f };
	float vec_b[3] = { 4.0f, 5.0f, 6.0f };

	printf("%f", dot_product(vec_a, vec_b));

	return 0;
}

float dot_product(float v1[3], float v2[3])
{
	return (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]);
}