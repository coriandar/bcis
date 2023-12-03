#include <stdio.h>
#include <math.h>

void compute_trig(float deg, float* sin_angle, float* cos_angle);

int main(void)
{
	printf("Angle? ");
	float angle = 0.0f;
	scanf("%f", &angle);

	float sin_result = 0.0f;
	float cos_result = 0.0f;

	float* p_sin_result = &sin_result;
	float* p_cos_result = &cos_result;

	// TODO: Call compute_trig
	compute_trig(angle, p_sin_result, p_cos_result);

	printf("sin(%f) is %f\n", angle, sin_result);
	printf("cos(%f) is %f\n", angle, cos_result);

	return 0;
}

void compute_trig(float deg, float* sin_angle, float* cos_angle)
{
	const float PI = 3.14159f;
	float radians = deg * PI / 180.0f;

	// TODO: Compute sine angle...
	*sin_angle = sin(radians);

	// TODO: Compute cosine angle...
	*cos_angle = cos(radians);
}