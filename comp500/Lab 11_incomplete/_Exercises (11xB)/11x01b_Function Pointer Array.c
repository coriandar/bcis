/*
// ERRORS
	array of funcitons need point to

// LEARNT
	How to use function pointers that take parameters
	https://stackoverflow.com/questions/252748/how-can-i-use-an-array-of-function-pointers
*/

#include <stdio.h>

// typedef here for transform function, add address in main.
typedef float(*transform)(float);

float double_it(float x);
float triple_it(float x);
float square_it(float x);
float cube_it(float x);

int main(void)
{
	// array of functions,need point to
	transform func[4];

	printf("Input a real number: ");
	float input = 0.0f;
	scanf("%f", &input);

	printf("Operation: 0=Double, 1=Triple, 2=Square, 3=Cube\n");
	int operation = -1;
	scanf("%d", &operation);

	// TODO: 1) Assign the address of each function into
	// the func array elements:
	// point to function name(address)
	func[0] = double_it;
	func[1] = triple_it;
	func[2] = square_it;
	func[3] = cube_it;

	// TODO: 2) Call the func element corresponding to the
	// operation selected by the user:
	printf("Result: %f\n", (*func[operation])(input));

	return 0;
}

float double_it(float x)
{
	return x * 2.0f;
}

float triple_it(float x)
{
	return x * 3.0f;
}

float square_it(float x)
{
	return x * x;
}

float cube_it(float x)
{
	return x * x * x;
}