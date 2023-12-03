// if candidate has 3 or more years interview.
// if candidate has 2 or less, interview only if know C.

#include <stdio.h>

int main(void)
{
	printf("How many years\' experience\? ");
	int exp = 0;
	scanf("%d", &exp);

	printf("Does the candidate know C (y/n)\? ");
	char know_c = '\0';
	scanf(" %c", &know_c);

	if (exp >= 3 || know_c == 'y')
	{
		printf("\nThis candidate must be interviewed.\n");
	}
	else if (exp < 3)
	{
		printf("\nDo not interview this candidate.\n");
	}

	return 0;
}