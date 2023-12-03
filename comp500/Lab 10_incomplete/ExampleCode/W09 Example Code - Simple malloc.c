#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p_age = 0;
	p_age = malloc(sizeof(int));
	
	if (0 == p_age)
	{
		printf("Malloc failed to allocate memory!\n");
	}
	else
	{
		printf("How old are you? ");
		scanf("%d", p_age);
		printf("You are %d years old.\n", *p_age);
		free(p_age);
		p_age = 0;
	}
	
	return 0;
}