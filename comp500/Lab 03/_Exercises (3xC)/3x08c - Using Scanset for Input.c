#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[32] = "\0";
	char last_name[32] = "\0";
	char course_name[64] = "\0";

	printf("First name? ");
	scanf("%31s", &first_name);

	printf("Last name? ");
	scanf("%31s", &last_name);

	printf("Course name? ");
	//needed a space " space %63", tells scanf to discard previous enter.
	scanf(" %63[^\n]", &course_name);

	printf("\n%s %s is studying %s.\n", first_name, last_name, course_name);

	return 0;
}