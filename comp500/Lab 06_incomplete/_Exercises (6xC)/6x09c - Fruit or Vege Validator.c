#include <stdio.h>
#include <string.h>

enum Produce
{
	FRUIT,
	VEGE,
	UNDEFINED
};

enum Produce type = UNDEFINED;

void print_fruit_or_vege(void);

int main(void)
{
	printf("Please input the item to identify: ");
	char input_produce[20];
	scanf("%19s", &input_produce);

	int validation = 0;

	do
	{
		if (strcmp(input_produce, "apple") == 0)
		{
			validation = 1;
			type = FRUIT;
		}
		else if (strcmp(input_produce, "banana") == 0)
		{
			validation = 1;
			type = FRUIT;
		}
		else if (strcmp(input_produce, "orange") == 0)
		{
			validation = 1;
			type = FRUIT;
		}
		else if (strcmp(input_produce, "melon") == 0)
		{
			validation = 1;
			type = FRUIT;
		}
		else if (strcmp(input_produce, "tomato") == 0)
		{
			validation = 1;
			type = FRUIT;
		}
		else if (strcmp(input_produce, "broccoli") == 0)
		{
			validation = 1;
			type = VEGE;
		}
		else if (strcmp(input_produce, "carrot") == 0)
		{
			validation = 1;
			type = VEGE;
		}
		else if (strcmp(input_produce, "onion") == 0)
		{
			validation = 1;
			type = VEGE;
		}
		else if (strcmp(input_produce, "potato") == 0)
		{
			validation = 1;
			type = VEGE;
		}
		else if (strcmp(input_produce, "spinach") == 0)
		{
			validation = 1;
			type = VEGE;
		}
		else
		{
			validation = 0;
			type = UNDEFINED;
			printf("\n");
			printf("%s ", input_produce);
			printf("is not a fruit or vegetable, try again: ");
			scanf("%19s", &input_produce);
		}
	}
	while (validation == 0);

	printf("\n");
	printf("%s ", input_produce);
	print_fruit_or_vege();

	return 0;
}

void print_fruit_or_vege(void)
{
	if (type == FRUIT)
	{
		printf("is a fruit.");
		printf("\n");
	}
	else if (type == VEGE)
	{
		printf("is a vegetable.");
		printf("\n");
	}
}