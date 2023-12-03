#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Suit
{
	CLUB,
	SPADE,
	HEART,
	DIAMOND
};

struct Playing_Card
{
	enum Suit suit;
	int rank;
};

struct Playing_Card get_card(void)
{
	struct Playing_Card new_card;
	new_card.suit = (rand() % DIAMOND) + 1;
	new_card.rank = (rand() % 12) + 1;
	return new_card;
}

void print_suit(enum Suit suit)
{
	switch (suit)
	{
		case HEART:
			printf("Hearts");
			break;
		case SPADE:
			printf("Spades");
			break;
		case DIAMOND:
			printf("Diamonds");
			break;
		case CLUB:
			printf("Clubs");
			break;
	}
}

void print_rank(int rank)
{
	if (rank == 1)
	{
		printf("Ace");
	}
	else if (rank == 11)
	{
		printf("Jack");
	}
	else if (rank == 12)
	{
		printf("Queen");
	}
	else if (rank == 13)
	{
		printf("King");
	}
	else
	{
		printf("%d", rank);
	}
}

void print_card(struct Playing_Card print_me)
{
	print_rank(print_me.rank);
	printf(" ");
	print_suit(print_me.suit);
}

int main(void)
{
	struct Playing_Card card;
	int key = 0;
	srand(time(0));
	
	do
	{
		card = get_card();
		print_card(card);
		printf("\n\nPress the enter key to draw");
		printf(" another card (q to quit)!\n\n");
		scanf("%c", &key);
		}
	while ('q' != key);
	
	return 0;
}