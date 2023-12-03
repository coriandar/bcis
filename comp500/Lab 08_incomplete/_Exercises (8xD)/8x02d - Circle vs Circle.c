/*
//LEARNT
Distance bewteen circle equation.
https://stackoverflow.com/questions/5509151/finding-the-distance-between-two-circles

https://www.whitman.edu/mathematics/calculus_online/section01.02.html#:~:text=According%20to%20the%20distance%20formula,r%20centered%20at%20the%20origin.
*/

#include <stdio.h>
#include <math.h>

struct Circle
{
	float radius;
	float x_position;
	float y_position;
};

float define_between(struct Circle circle_1, struct Circle circle_2);

int main(void)
{
	struct Circle circle_1;
	struct Circle circle_2;

	printf("Circle 1 radius: ");
	scanf("%f", &circle_1.radius);
	printf("Circle 1 x_pos: ");
	scanf("%f", &circle_1.x_position);
	printf("Circle 1 y_pos: ");
	scanf("%f", &circle_1.y_position);

	printf("\n");
	printf("Circle 2 radius: ");
	scanf("%f", &circle_2.radius);
	printf("Circle 2 x_pos: ");
	scanf("%f", &circle_2.x_position);
	printf("Circle 2 y_pos: ");
	scanf("%f", &circle_2.y_position);

	float distance_between = define_between(circle_1, circle_2);

	printf("\n");
	printf("Distance between circle edge: ");
	printf("%f\n", distance_between);

	return 0;
}

float define_between(struct Circle circle_1, struct Circle circle_2)
{
	// d = sqrt(((x2 - x1)^2) + ((y2 - y1)^2) - (r2 + r1)

	float x = powf(circle_2.x_position - circle_1.x_position, 2.0f);
	float y = powf(circle_2.y_position - circle_1.y_position, 2.0f);
	float r = circle_2.radius + circle_1.radius;

	return (sqrtf(x + y)) - r;
}