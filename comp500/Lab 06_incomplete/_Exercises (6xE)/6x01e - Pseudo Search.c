#include <stdio.h>

int main(void)
{
	int numbers[5];

	for (int index = 0; index < 5; index++)
	{
		printf("Input [%d]\? ", index);
		scanf("%d", &numbers[index]);
	}

	int found_at = -1;
	
	printf("\n");
	printf("Search for\? ");
	int search_key = 0;
	scanf("%d", &search_key);

	for (int index = 0; index < 5; index++)
	{
		if (numbers[index] == search_key)
		{
			found_at = index;
		}
	}

	if (found_at == -1)
	{
		printf("\n");
		printf("Not found!");
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("%d ", search_key);
		printf("found at element ");
		printf("[%d] ", found_at);
		printf("\n");
	}

	return 0;
}