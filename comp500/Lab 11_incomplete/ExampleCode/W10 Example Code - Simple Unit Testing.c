#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//#define ACTIVATE_SIMPLE_UNIT_TESTING

float get_pi(void);
float compute_area(float radius);
float compute_circumference(float radius);
float compute_diameter(float radius);

// Unit Testing Main:
#ifdef ACTIVATE_SIMPLE_UNIT_TESTING
int main(void)
{
	printf("Starting Unit Tests...\n");
	
	assert(get_pi() == 3.14159 f);
	
	// Testing circle of radius 0.0f:
	assert(compute_area(0.0 f) == 0.0 f);
	assert(compute_circumference(0.0 f) == 0.0 f);
	assert(compute_diameter(0.0 f) == 0.0 f);
	
	// Testing circle of radius 1.0f:
	assert(compute_area(1.0 f) == 3.14159 f);
	assert(compute_circumference(1.0 f) == 6.283180 f);
	assert(compute_diameter(1.0 f) == 2.0 f);
	
	// Testing circle of radius 2.5f:
	assert(compute_area(2.5 f) == 19.634937 f);
	assert(compute_circumference(2.5 f) == 15.707951 f);
	assert(compute_diameter(2.5 f) == 5.0 f);
	
	// Testing circle of radius 5.0f:
	assert(compute_area(5.0 f) == 78.539749 f);
	assert(compute_circumference(5.0 f) == 31.415901 f);
	assert(compute_diameter(5.0 f) == 10.0 f);
	
	// Testing circle of radius 10.0f:
	assert(compute_area(10.0 f) == 314.159 f);
	assert(compute_circumference(10.0 f) == 62.831802 f);
	assert(compute_diameter(10.0 f) == 20.0 f);
	
	printf("Finished Unit Tests!\n");
	
	return 0;
}
#else //ACTIVATE_SIMPLE_UNIT_TESTING
// Normal Main:
int main(void)
{
	printf("Input a radius: ");
	float user_radius = 0.0 f;
	scanf("%f", &user_radius);
	
	printf("\n");
	printf("Area is: %f\n", compute_area(user_radius));
	printf("Circumference is: %f\n", compute_circumference(user_radius));
	printf("Diameter is: %f\n", compute_diameter(user_radius));
	
	return 0;
}
#endif //ACTIVATE_SIMPLE_UNIT_TESTING

float get_pi(void)
{
	return 3.14159 f;
}

float compute_area(float radius)
{
	return (get_pi() *radius *radius);
}

float compute_circumference(float radius)
{
	return (2.0 f* get_pi() *radius);
}

float compute_diameter(float radius)
{
	// NOTE: This function has a bug...
	// its implementation is incorrect!
	return radius / 2.0 f;
}

//Uncomment the #define for ACTIVATE_SIMPLE_UNIT_TESTING to turn on Unit Testing mode.












