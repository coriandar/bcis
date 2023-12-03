#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// This very small C source code has many issues!
//
// At warning level 3, there are no compiler
// warnings when built!
//
// Raising the compiler's warning level will
// help you notice the issues!
//
// Try changing the warning level to:
// "EnableAllWarnings", and review the
// compiler's output!

void print_message(int times);

main()
{
	print_message(3);
}

void print_message(times)
{
	for (int k = 0; k = times; ++k)
	{
		printf("Warning examples!\n");
	}
}