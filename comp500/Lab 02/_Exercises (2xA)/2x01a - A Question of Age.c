#include <stdio.h>

int main(void)
{
	//need to have a variable int.
	//prinf to ask question.
	//scanf to wait for int %d. store input into age.
	//printf %d into string, age variable.

	int age = 0; //From example, nice base to have number at.

	printf("What is your age\? ");
	scanf("%d", &age);

	printf("\n");
	printf("You are %d years old. \n", age);

	return 0;
}