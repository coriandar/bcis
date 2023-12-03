#include <stdio.h>

int main(void)
{
	float mass = 0.0f;
	float height = 0.0f;
	const float GRAV = 9.81f;

	printf("Mass? ");
	scanf("%f", &mass);

	printf("Height? ");
	scanf("%f", &height);

	float potential_energy = mass * GRAV * height;

	printf("Potential energy is %f.\n", potential_energy);

	return 0;
}