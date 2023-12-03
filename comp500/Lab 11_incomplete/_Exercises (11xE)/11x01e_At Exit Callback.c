/*
// LEARNT
	atexit(func)
	https://www.cplusplus.com/reference/cstdlib/atexit/

*/
#include <stdio.h>
#include <stdlib.h>

// TODO: 1) include stdlib.h:
// TODO: 2) Declare call_me_on_exit:
void call_me_on_exit(void);

int main(void)
{
	// TODO: 4) Register the at exit callback:
	atexit (call_me_on_exit);

	char quit = 0;

	do
	{
		printf("Time to quit (y/n)? ");
		scanf(" %c", &quit);
	} while (quit != 'y');

	return 0;
}

// TODO: 3) Define call_me_on_exit:
void call_me_on_exit(void)
{
	printf("Quitting after main!\n");
}