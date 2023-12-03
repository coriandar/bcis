#include <stdio.h>

void print_quadratic(int a, int b, int c);

int main(void)
{
	printf("Enter a: ");
	int a = 0;
	scanf("%d", &a);

	printf("Enter b: ");
	int b = 0;
	scanf("%d", &b);

	printf("Enter c: ");
	int c = 0;
	scanf("%d", &c);

	printf("\n");
	print_quadratic(a, b, c);

	return 0;
}

void print_quadratic(int a, int b, int c)
{
	printf("%dx^2", a);
	printf(" %s ", (b < 0) ? "-" : "+");
	printf("%dx", (b < 0) ? b * -1: b);
	printf(" %s ", (c < 0) ? "-" : "+");
	printf("%d\n", (c < 0) ? c * -1 : c);
}