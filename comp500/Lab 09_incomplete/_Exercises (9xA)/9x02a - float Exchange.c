#include <stdio.h>

void exchange(float* px, float* py);

int main(void)
{
	float x = 1;
	float y = 5;

	float* px = &x;
	float* py = &y;

	printf("Start\n");
	printf("x: %f\n", x);
	printf("y: %f\n", y);
	printf("\n");

	exchange(px, py);
	printf("Exchanged\n");
	printf("x: %f\n", x);
	printf("y: %f\n", y);

	return 0;
}

void exchange(float* px, float* py)
{
	float temp = *px;
	*px = *py;
	*py = temp;
}