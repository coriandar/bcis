#include <stdio.h>

enum Suit
{
	CLUB,
	SPADE,
	DIAMOND,
	HEART
};

void print_card_type(enum Suit card_type)
{
	if (card_type == CLUB)
	{
		printf("Club\n");
	}
	else if (card_type == SPADE)
	{
		printf("Spade\n");
	}
	else if (card_type == DIAMOND)
	{
		printf("Diamond\n");
	}
	else if (card_type == HEART)
	{
		printf("Heart\n");
	}
}

int main(void)
{
	enum Suit example_card = SPADE;
	printf("example card is a... ");
	print_card_type(example_card);
	enum Suit another_card = HEART;
	printf("another card is a... ");
	print_card_type(another_card);
	return 0;
}