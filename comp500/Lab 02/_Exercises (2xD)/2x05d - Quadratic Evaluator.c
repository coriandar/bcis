#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;

	printf("Quadratic Evaluator : f(x) = ax^2 + bx + c\n");
	printf("------------------------------------------\n");

	printf("Set the a value\n");
	printf("> ");
	scanf("%d", &a);

	printf("Set the b value\n");
	printf("> ");
	scanf("%d", &b);

	printf("Set the c value\n");
	printf("> ");
	scanf("%d", &c);

	printf("Evaluate f(x) when x is\n");
	printf("> ");
	scanf("%d", &x);

	printf("When x is %d, f(x) is %d.", x, (a*(x * x) + (b*x) + c));

	return 0;
}