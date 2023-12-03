#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Please input the item to identify: ");
	char item[16] = "\0";
	scanf("%15s", &item);

	if (strcmp(item, "apple") == 0 || strcmp(item, "banana") == 0 || strcmp(item, "orange") == 0 || strcmp(item, "melon") == 0 || strcmp(item, "tomato") == 0)
	{
		printf("\n%s is a fruit.\n", item);
	}
	else if (strcmp(item, "Apple") == 0 || strcmp(item, "Banana") == 0 || strcmp(item, "Orange") == 0 || strcmp(item, "Melon") == 0 || strcmp(item, "Tomato") == 0)
	{
		printf("\n%s is a fruit.\n", item);
	}
	else if (strcmp(item, "broccoli") == 0 || strcmp(item, "carrot") == 0 || strcmp(item, "onion") == 0 || strcmp(item, "potato") == 0 || strcmp(item, "spinach") == 0)
	{
		printf("\n%s is a vegetable.\n", item);
	}
	else if (strcmp(item, "Broccoli") == 0 || strcmp(item, "Carrot") == 0 || strcmp(item, "Onion") == 0 || strcmp(item, "Potato") == 0 || strcmp(item, "Spinach") == 0)
	{
		printf("\n%s is a vegetable.\n", item);
	}
	else
	{
		printf("\n%s is not a fruit or vegetable.\n", item);
	}

	return 0;
}