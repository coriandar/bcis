#include <stdio.h>

int main(void)
{
	int input = 0;
	int ten_thou = 0;
	int thou = 0;
	int hun = 0;
	int ten = 0;
	int one = 0;

	printf("Please enter a five digit number: ");
	scanf("%d", &input);

	ten_thou = input / 10000;
	thou = (input % 10000) / 1000;
	hun = ((input % 10000) % 1000) / 100;
	ten = (((input % 10000) % 1000) % 100) / 10;
	one = ((((input % 10000) % 1000) % 100) % 10) / 1;

	printf("\n%d...%d...%d...%d...and...%d", ten_thou, thou, hun, ten, one);

	return 0;
}