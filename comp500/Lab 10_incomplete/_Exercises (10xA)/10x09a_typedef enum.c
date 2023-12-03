#include <stdio.h>

typedef enum Suit
{
	CLUB,
	SPADE,
	DIAMOND,
	HEART
} Card_Suit;

void print_card_type(Card_Suit card_type);

int main(void)
{
	Card_Suit example_card = SPADE;
	printf("example card is a...");
	print_card_type(example_card);

	Card_Suit another_card = HEART;
	printf("another card is a...");
	print_card_type(another_card);

	return 0;
}

void print_card_type(Card_Suit card_type)
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