#include <stdio.h>

int main(void)
{
	printf("Question (Y/N)\? ");
	char ans = '\0';
	scanf("%c", &ans);

	printf("\nUser response: ");

	if (ans == 'Y' || ans == 'y')
	{
		printf("Yes\n");
	}
	else if (ans == 'N' || ans == 'n')
	{
		printf("No\n");
	}
	else
	{
		printf("Invalid input!\n");
	}

	return 0;
}