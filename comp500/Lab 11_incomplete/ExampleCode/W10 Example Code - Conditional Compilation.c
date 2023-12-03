#include <stdio.h>

int main(void)
{
#ifdef _DEBUG
	printf("Debug Build!\n");
#else
	printf("Release Build!\n");
#endif // _DEBUG

	return 0;
}

/**
Build this project with the Debug Build Target, and observe the program’s output when executed.

Build this project again, but with the Release Build Target. Observe the program’s output when executed.
*/