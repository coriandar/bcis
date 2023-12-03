#include <stdio.h>

int main(void)
{
	printf("Did you hand in Stage 1 (Y/N)\? ");
	char s_one = '\0';
	scanf(" %c", &s_one);

	printf("Did you hand in Stage 2 (Y/N)\? ");
	char s_two = '\0';
	scanf(" %c", &s_two);

	printf("Did you hand in Stage 3 (Y/N)\? ");
	char s_three = '\0';
	scanf(" %c", &s_three);

	if (s_one == 'Y' && s_two == 'Y' && s_three == 'Y')
	{
		printf("\nWell done!\n");
	}
	else
	{
		printf("\nOh no, those were easy marks!\n");
	}

	return 0;
}