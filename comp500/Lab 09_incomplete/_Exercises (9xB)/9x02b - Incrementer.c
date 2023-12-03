#include <stdio.h>

// TODO: Declare increment prototype:
void increment(int* pointer);

int main(void)
{
	int x = 0;
	int* p_x = &x;

	printf("> ");
	scanf("%d", &x);

	// TODO: Call increment with x by reference
	increment(p_x);
	printf("x holds %d\n\n", x);

	// TODO: Call increment with x by reference
	increment(p_x);
	printf("x holds %d\n\n", x);

	// TODO: Call increment with x by reference
	increment(p_x);
	printf("x holds %d\n\n", x);

	return 0;
}

// TODO: Define increment function:
void increment(int* pointer)
{
	// these do the same thing
	//(*pointer)++;
	*pointer += 1;
}