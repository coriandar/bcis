/*
//IMPLEMENTATION
Declare a struct named Point3D which represents a point in three-dimensions. 3D points are three-tuples, with real numbers for the x, y, and z values. Choose appropriate types and names for these members.

Write a function called compute_distance3d, which takes as input two Point3D structures by value. Inside this function, calculate the distance between the two points. Return the distance and print out.
*/

#include <stdio.h>
#include <math.h>

struct Point3D
{
	float x;
	float y;
	float z;
};

float compute_distance3d(struct Point3D p1, struct Point3D p2);

int main(void)
{
	struct Point3D p1;
	p1.x = 1.0f;
	p1.y = 2.0f;
	p1.z = 3.0f;

	struct Point3D p2;
	p2.x = 4.0f;
	p2.y = 5.0f;
	p2.z = 6.0f;

	printf("Distance: %f\n", compute_distance3d(p1, p2));

	return 0;
}

float compute_distance3d(struct Point3D p1, struct Point3D p2)
{
	float sum_x = powf((p2.x - p1.x), 2.0f);
	float sum_y = powf((p2.y - p1.y), 2.0f);
	float sum_z = powf((p2.z - p1.z), 2.0f);

	return sqrt(sum_x + sum_y + sum_z);
}