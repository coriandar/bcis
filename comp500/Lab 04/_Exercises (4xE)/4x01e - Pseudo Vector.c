//DESIGN
//PRINT "x? "
//SCAN x
//PRINT "y? "
//SCAN y
//PRINT "z? "
//SCAN z

//COMPUTE length_squared AS((x * x) + (y * y) + (z * z))
//COMPUTE length AS sqrtf(length_squared)

//COMPUTE nx AS x / length
//COMPUTE ny AS y / length
//COMPUTE nz AS z / length

//PRINT "Normalised: "
//PRINT nx
//PRINT ", "
//PRINT ny
//PRINT ", "
//PRINT nz
//PRINT newline

#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("x\? ");
	float x = 0.0f;
	scanf("%f", &x);

	printf("y\? ");
	float y = 0.0f;
	scanf("%f", &y);

	printf("z\? ");
	float z = 0.0f;
	scanf("%f", &z);

	float length_squared = (powf(x, 2.0f)) + (powf(y, 2.0f)) + (powf(z, 2.0f));
	float length = sqrtf(length_squared);

	float nx = x / length;
	float ny = y / length;
	float nz = z / length;

	printf("\nNormalised: %f, %f, %f\n", nx, ny, nz);

	return 0;
}