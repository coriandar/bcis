#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <crtdbg.h>

typedef enum Card_Suit
{
	DIAMONDS,
	HEARTS,
	CLUBS,
	SPADES
} Rank;

typedef enum Card_Rank
{
	NOTHING,
	ACE,
	JACK = 11,
	QUEEN = 12,
	KING = 13
} Rank;

typedef struct Playing_Card
{
	int rank;
	int suit;
} Card;

void seed_rand(void);
Card* card_factory(void);
void assign_suit(Card* pointer);
void assign_rank(Card* pointer);
void print_playing_card(Card* pointer);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
		
	seed_rand();

	Card* p_new_card[5];

	for (int index = 0; index < 5; index++)
	{
		p_new_card[index] = card_factory();
	}

	// how to make this a function
	for (int index = 0; index < 5; index++)
	{
		print_playing_card(p_new_card[index]);
	}

	//free malloc'd memory, set pointer to null
	for (int index = 0; index < 5; index++)
	{
		free(p_new_card[index]);
	}

	return 0;
}

void print_playing_card(Card* pointer)
{
	printf("Rank: ");
	assign_rank(pointer);
	printf("\n");

	printf("Suit: ");
	assign_suit(pointer);
	printf("\n");
	printf("\n");
}

void assign_rank(Card* pointer)
{
	if (2 <= pointer->rank && pointer->rank <= 10)
	{
		printf("%d", pointer->rank);
	}
	else if (pointer->rank == ACE)
	{
		printf("Ace");
	}
	else if (pointer->rank == JACK)
	{
		printf("Jack");
	}
	else if (pointer->rank == QUEEN)
	{
		printf("Queen");
	}
	else if (pointer->rank == KING)
	{
		printf("King");
	}
}

void assign_suit(Card* pointer)
{
	if (pointer->suit == DIAMONDS)
	{
		printf("Diamonds");
	}
	else if (pointer->suit == HEARTS)
	{
		printf("Hearts");
	}
	else if (pointer->suit == CLUBS)
	{
		printf("Clubs");
	}
	else if (pointer->suit == SPADES)
	{
		printf("Spades");
	}
}

Card* card_factory(void)
{
	Card* p_new_card = malloc(sizeof(Card));

	int suit = rand() % 4;
	assert(0 <= suit && suit <= 3);
	p_new_card->suit = suit;

	int rank = rand() % 13 + 1;
	assert(1 <= rank && rank <= 13);
	p_new_card->rank = rank;
	
	return p_new_card;
}

void seed_rand(void)
{
	srand(time(0));
}