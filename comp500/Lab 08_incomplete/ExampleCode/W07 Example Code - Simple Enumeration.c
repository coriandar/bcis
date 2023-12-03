#include <stdio.h>

enum Degree_type
{
	DOCTORATE,
	MASTERS,
	BACHELORS
};

int main(void)
{
	enum Degree_type my_degree = BACHELORS;
	printf("a) %d\n", my_degree);
	my_degree = MASTERS;
	printf("b) %d\n", my_degree);
	my_degree = DOCTORATE;
	printf("c) %d\n", my_degree);
	return 0;
}