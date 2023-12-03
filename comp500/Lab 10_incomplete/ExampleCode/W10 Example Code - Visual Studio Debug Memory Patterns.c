#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Try running this program with the Debugger (CTRL-F5) and then
// again without the debugger (F5)...note the difference in
// output...
//
// Then try running the program in Release mode instead of Debug,
// again note the differences in output!
//

int main(void)
{
	int local;
	
	printf("Place a breakpoint on this line and...\n");
	printf("look at the contents of the ");
	printf("variable named local... in hexadecimal!");
	printf("\n\n");
	
	printf("Note: 0xCCCCCCCC means this is a fresh ");
	printf(" stack variable...");
	printf("\n\n");
	
	int *p = malloc(sizeof(int));
	printf("After allocating an int with malloc...\n");
	printf("p holds: %p\n", p);
	
	printf("p points to a value of: %X\n", *p);
	printf("Note: 0xCDCDCDCD means fresh heap memory...");
	printf("\n\n");
	
	free(p);
	
	printf("After deallocating the memory at p...\n");
	printf("p points to a value of: %X (dangerous!)\n", *p);
	printf("Note: 0xFEEEFEEE means free'd heap memory...\n");
	printf("Note: 0xDDDDDDD means deallocated (dead) memory...");
	printf("\n\n");
	
	printf("p should be set to null after free'ing...");
	printf("\n\n");
	
	return 0;
}