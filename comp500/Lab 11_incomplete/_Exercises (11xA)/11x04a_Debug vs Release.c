/*
//LEARNT
Release build does not print the side_effect_example.

Build environment changed, removed debugging Memory patterns, tools and magic numberd. 

Asserts not present in release.

Debug exe is larger.
*/

#include <stdio.h>
#include <assert.h>

int side_effect_example(void);

int main(void)
{
	printf("Program just started...\n\n");

	printf("Assert used next...\n\n");
	assert(side_effect_example());
	printf("Assert was just used (maybe)...\n\n");

// Check if in debug mode. if is will print below.
#ifdef _DEBUG
	printf("This is a Debug Build...\n\n");
#else
	printf("This is a Release Build...\n\n");
#endif // _DEBUG

	printf("Program is about to end...\n\n");

	return 0;
}

int side_effect_example(void)
{
	printf("This function will not be ");
	printf("called when the program is ");
	printf("compiled in Release mode.\n\n");

	return 1;
}