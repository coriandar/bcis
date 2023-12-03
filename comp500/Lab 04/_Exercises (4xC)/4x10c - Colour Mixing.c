#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("First colour\? ");
	char first[16] = "\0";
	scanf("%15s", &first);

	printf("Second colour\? ");
	char second[16] = "\0";
	scanf("%15s", &second);

	if (strcmp(first, "Yellow") == 0)
	{
		if (strcmp(second, "Yellow") == 0)
		{
			printf("\n%s and %s is still %s!\n", first, second, first);
		}
		else if (strcmp(second, "Red") == 0)
		{
			printf("\n%s and %s mix to make Orange.\n", first, second);
		}
		else if (strcmp(second, "Blue") == 0)
		{
			printf("\n%s and %s mix to make Green.\n", first, second);
		}
		else if (strcmp(second, "Yellow") != 0 && strcmp(second, "Red") != 0 && strcmp(second, "Blue") != 0)
		{
			printf("\n%s is not a valid primary colour.\n", second);
		}
	}
	else if (strcmp(first, "Red") == 0)
	{
		if (strcmp(second, "Red") == 0)
		{
			printf("\n%s and %s is still %s!\n", first, second, first);
		}
		else if (strcmp(second, "Blue") == 0)
		{
			printf("\n%s and %s mix to make Violet.\n", first, second);
		}
		else if (strcmp(second, "Yellow") == 0)
		{
			printf("\n%s and %s mix to make Orange.\n", first, second);
		}
		else if (strcmp(second, "Yellow") != 0 && strcmp(second, "Red") != 0 && strcmp(second, "Blue") != 0)
		{
			printf("\n%s is not a valid primary colour.\n", second);
		}
	}
	else if (strcmp(first, "Blue") == 0)
	{
		if (strcmp(second, "Blue") == 0)
		{
			printf("\n%s and %s is still %s!\n", first, second, first);
		}
		else if (strcmp(second, "Yellow") == 0)
		{
			printf("\n%s and %s mix to make Green.\n", first, second);
		}
		else if (strcmp(second, "Red") == 0)
		{
			printf("\n%s and %s mix to make Violet.\n", first, second);
		}
		else if (strcmp(second, "Yellow") != 0 && strcmp(second, "Red") != 0 && strcmp(second, "Blue") != 0)
		{
			printf("\n%s is not a valid primary colour.\n", second);
		}
	}
	else if (strcmp(first, "Yellow") != 0 && strcmp(first, "Red") != 0 && strcmp(first, "Blue") != 0)
	{
		if (strcmp(second, "Yellow") != 0 && strcmp(second, "Red") != 0 && strcmp(second, "Blue") != 0)
		{
			printf("\n%s and %s are not valid primary colours.\n", first, second);
		}
		else if (strcmp(second, "Yellow") == 0 || strcmp(second, "Red") == 0 || strcmp(second, "Blue") == 0)
		{
			printf("\n%s is not a valid primary colour.\n", first);
		}
	}


	return 0;
}