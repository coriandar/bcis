#include <stdio.h>

int find_dot(char* cstring);

int main(void)
{
	char* text[] =
	{
		"Steffan Hooper.",
		"Xinyu.Hu",
		".Koz Ross",
		"COMP500 ENSE501",
		"*** A.U.T. ***"
	};

	for (int index = 0; index < 5; index++)
	{
		printf("%s [dot index %d]\n", text[index], find_dot(text[index]));
	}

	return 0;
}

int find_dot(char* cstring)
{
	int dot_position = 0;

	// if more than one, find first dot
	for (; cstring[dot_position] != '.'; dot_position++);

	return dot_position;
}