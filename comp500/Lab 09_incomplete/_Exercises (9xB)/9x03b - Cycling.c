/*
// LEARNT
Input enter....
*/
#include <stdio.h>

void cycle(int* a, int* b, int* c);

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int loop = 1;
	char input = 0;

	printf("a? ");
	scanf("%d", &a);
	printf("b? ");
	scanf("%d", &b);
	printf("c? ");
	scanf("%d", &c);
	scanf("%c", &input);

	int* p_a = &a;
	int* p_b = &b;
	int* p_c = &c;

	while(loop)
	{
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		printf("Press enter to cycle numbers...");
		scanf("%c", &input);

		// TODO: Call cycle with a, b, and c references:
		cycle(p_a, p_b, p_c);
	}

	return 0;
}

void cycle(int* a, int* b, int* c)
{
	// TODO: Implement the cycle function here...
	int temp = *b;

	*b = *a;
	*a = *c;
	*c = temp;
}