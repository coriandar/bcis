#include <stdio.h>

// TODO: Declare cube prototype:
void cube(float* ptr);

int main(void)
{
	printf("> ");
	float x = 0.0f;
	scanf("%f", &x);

	float* p_float = &x;

	// TODO: Call cube with x by reference...
	//can also put address of x
	//cube(&x);
	cube(p_float);

	printf("x holds %f\n\n", x);

	return 0;
}

// TODO: Define cube function:
void cube(float* ptr)
{
	*ptr = (*ptr) * (*ptr) * (*ptr);
}