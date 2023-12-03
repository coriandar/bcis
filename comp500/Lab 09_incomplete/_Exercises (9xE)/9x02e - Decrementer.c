#include <stdio.h>

// TODO: Declare decrement prototype:
void decrement(int* ptr);

int main(void)
{
	printf("> ");
	int x = 0;
	scanf("%d", &x);

	int* p_x = &x;

	// TODO: Call decrement with x by reference
	decrement(p_x);
	printf("x holds %d\n\n", x);

	// TODO: Call decrement with x by reference
	decrement(p_x);
	printf("x holds %d\n\n", x);

	// TODO: Call decrement with x by reference
	decrement(p_x);
	printf("x holds %d\n\n", x);

	return 0;
}

// TODO: Define decrement function:
void decrement(int* ptr)
{
	// (dereference) then --
	(*ptr)--;
}