#include <stdio.h>

struct Vec3
{
	float x;
	float y;
	float z;
};

float dot_product(struct Vec3 v1, struct Vec3 v2);

int main(void)
{
	struct Vec3 vec_a;
	vec_a.x = 1.5f;
	vec_a.y = 2.5f;
	vec_a.z = 3.5f;

	struct Vec3 vec_b;
	vec_b.x = 4.0f;
	vec_b.y = 5.0f;
	vec_b.z = 6.0f;

	printf("%f", dot_product(vec_a, vec_b));

	return 0;
}

float dot_product(struct Vec3 v1, struct Vec3 v2)
{
	return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
}