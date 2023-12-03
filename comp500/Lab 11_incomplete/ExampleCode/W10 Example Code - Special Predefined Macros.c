#include <stdio.h>

int main(void)
{
	printf("Using the Special Predefined Macros!\n");
	printf("\n");
	
	printf("This code is in %s\n", __FILE__);
	printf("\n");
	
	printf("This code was compiled on %s, ", __DATE__);
	
	printf("at %s\n", __TIME__);
	printf("\n");
	
	printf("This printf was on line %d\n", __LINE__);
	printf("\n");
	
	return 0;
}