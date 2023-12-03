//Create a source file named main.c, with the following contents:
#include <stdio.h>
#include "my.h"

int main(void)
{
	run_my();
	return 0;
}

//Create a header file named my.h, with the following contents:
#ifndef MY_H_GUARD
#define MY_H_GUARD

void run_my(void);

#endif	// MY_H_GUARD

//Create a source file named my.c, with the following contents:
#include <stdio.h>
#include "my.h"

void run_my(void)
{
	printf("run_my() in my.c called!\n");
}