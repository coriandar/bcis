#include <stdio.h>
#include <math.h>

int calculate_cube(int num);
void print_newline(int newline);

int main(void)
{
	printf("Input number to cube: ");
	int num = 0;
	scanf("%d", &num);

	print_newline(1);
	printf("The cube of %d is %d.", num, calculate_cube(num));
	print_newline(1);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}

	return;
}

int calculate_cube(int num)
{
	return (num * num * num);
}
