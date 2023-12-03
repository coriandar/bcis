#include <stdio.h>
int main(int argc, char* argv[])
{
	printf("There are %d arguments supplied.\n", argc);
	printf("\n");
	
	for (int k = 0; k < argc; ++k)
	{
		printf("argv[%d] is %s\n", k, argv[k]);
		printf("\n");
	}
	
	return 0;
}

/**
Test this program by changing the settings of the Visual Studio Project to supply arguments to the
program upon execution.

Configuration Properties
	Debugging
		Command Arguments
*/