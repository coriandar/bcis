#include <stdio.h>

// The Fibonacci sequence is a series of numbers where
// a number is found by adding up the two numbers
// before it in the sequence.
//
// Starting with 0 and 1, the sequence then goes:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, etc.
//
// This function will return the nth number in the
// Fibonacci sequence.
//
int fibonacci(int n);

int main(void)
{
	int input = 0;
	printf("> ");
	scanf("%d", &input);
	printf("%d\n", fibonacci(input));
	return 0;
}

int fibonacci(int n)
{
	// Base case:
	if (0 == n || 1 == n)
	{
		return n;
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}