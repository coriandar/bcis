#include <stdio.h>

int main(void)
{
	printf("C source code has an entry point named main.\n\n");

	printf("The main has { and } braces, inside of which there are\n");
	printf("instructions for the machine to run in sequence.\n\n");
	printf("The printf functionality sends text to the screen. To call\n");
	printf("printf the programmer must use ( and ) brackets after the\n");
	printf("printf, inside of which there is a piece of text. The text\n");
	printf("must be enclosed in \" quotes.\n\n");

	printf("Each instruction ends with a ; followed by a newline.\n\n");

	printf("Source code must successfully compile before the program can\n");
	printf("be run. Programmers test their programs by running them to\n");
	printf("ensure they function as expected!\n");

	return 0;
}