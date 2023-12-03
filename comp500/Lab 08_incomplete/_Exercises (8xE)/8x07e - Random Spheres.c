#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO: Declare a Sphere structure here:
struct Sphere
{
	float radius;
	float volume;
	float surface_area;
};

float get_random_percent(void);
void generate_spheres(struct Sphere all_spheres[10]);
void print_spheres(struct Sphere all_spheres[10]);

int main(void)
{
	srand(time(0));

	get_random_percent();

	printf("%f\n", (float)rand());
	/*
	struct Sphere the_spheres[10];

	int running = 1;
	char input = 0;

	do
	{
		printf("Press enter to generate new spheres:\n");
		scanf("%c", &input);

		generate_spheres(the_spheres);

		print_spheres(the_spheres);
	}
	while (running);
	*/

	return 0;
}

// TODO: Define the get_random_percent function here:
float get_random_percent(void)
{
	//float gen = (float)rand();
	
	printf("%d\n", rand());

	return 0;
}

/*
// TODO: Define the generate_spheres function here:
void generate_spheres(struct Sphere all_spheres[10])
{

}

// TODO: Define the print_spheres function here:
void print_spheres(struct Sphere all_spheres[10])
{

}
*/