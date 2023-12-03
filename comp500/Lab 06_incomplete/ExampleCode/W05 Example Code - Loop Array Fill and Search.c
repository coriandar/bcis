#include <stdio.h>

int main(void)
{
	int data[10];
	// Fill the array with user input:
	printf("Please input 10 numbers...\n");
	
	for (int i = 0; i < 10; ++i)
	{
		printf("Number at index %d: ", i);
		scanf("%d", &data[i]);
	}
	
	// Search the array for a value:
	printf("\nWhat value are you searching for? ");
	int search_value = 0;
	scanf("%d", &search_value);
	
	int found_at = -1;
	for (int index = 0; index < 10 && found_at == -1; ++index)
	{
		if (search_value == data[index])
		{
			found_at = index;
		}
	}
	
	if (found_at != -1)
	{
		printf("%d was found at", data[found_at]);
		printf(" index %d\n", found_at);
	}
	else
	{
		printf("%d was not found!\n", search_value);
	}
	
	return 0;
}