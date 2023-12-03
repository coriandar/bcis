#include <stdio.h>

int main(void)
{
	printf("Low: ");
	char low = '\0';
	scanf(" %c", &low);

	printf("High: ");
	char high = '\0';
	scanf(" %c", &high);

	printf("\n");

	for (char current = low; current <= high; current++)
	{
		printf("ASCII '%c' is %d\n", current, current);
	}
	printf("\n");

	return 0;
}