/*
//LEARNT
Pass through arguments. Argv.
*/

#include <stdio.h>

int main(int arg, char* argv[])
{
	printf("Arguments at execution: ");
	int arguments = 0;
	scanf("%d", &arguments);

	for (int index = 1; index <= arguments; index++)
	{
		printf("%s\n", argv[index]);
	}

	return 0;
}