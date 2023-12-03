#include <stdio.h>

int contains(char* cstring, char find)
{
	// TODO: Insert your code here...
}

int main(void)
{
	char buffer1[] = "Hello Programming 1 Students";
	char buffer2[] = "Learn to program using arrays and pointers!";

	int found_d = contains(buffer1, 'd');
	if (found_d == 1)
	{
		printf("buffer1 contains d\n");
	}
	else
	{
		printf("buffer1 does not contain m\n");
	}

	found_d = contains(buffer2, 'd');
	if (found_d == 1)
	{
		printf("buffer2 contains d\n");
	}
	else
	{
		printf("buffer2 does not contain d\n");
	}

	return 0;
}