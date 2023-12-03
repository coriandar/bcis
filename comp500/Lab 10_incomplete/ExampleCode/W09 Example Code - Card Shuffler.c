#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#define NUM_CARDS_IN_DECK 52
#define NUM_CARDS_PER_SUIT 13

enum Suit
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES,
	MAX_SUIT
};

struct Card
{
	int rank;
	enum Suit suit;
};

struct Card* create_deck_of_cards(void);
void shuffle_deck(struct Card* deck);
void print_deck(struct Card* deck);
char* get_card_name(struct Card* card);

int main(void)
{
	srand((int)time(0));
	
	struct Card* deck_of_cards = create_deck_of_cards();
	assert(deck_of_cards);
	
	printf("Not shuffled:\n");
	printf("-------------\n\n");
	print_deck(deck_of_cards);
	
	shuffle_deck(deck_of_cards);
	
	printf("\n");
	printf("After first shuffle:\n");
	printf("-------------\n\n");
	print_deck(deck_of_cards);
	
	shuffle_deck(deck_of_cards);
	
	printf("\n");
	printf("After second shuffle:\n");
	printf("-------------\n\n");
	print_deck(deck_of_cards);
	
	// Deallocate the deck...
	free(deck_of_cards);
	deck_of_cards = 0;
	
	return 0;
}

struct Card* create_deck_of_cards(void)
{
	struct Card* deck = malloc(sizeof(struct Card) * NUM_CARDS_IN_DECK);
	assert(deck);
	
	for (int suit = 0; suit < MAX_SUIT; ++suit)
	{
		for (int card_num = 1; card_num <= NUM_CARDS_PER_SUIT; ++card_num)
		{
			int index = (card_num - 1) + (NUM_CARDS_PER_SUIT * suit);
			deck[index].rank = card_num;
			deck[index].suit = suit;
		}
	}
	return deck;
}

void shuffle_deck(struct Card* deck)
{
	assert(deck);
	for (int i = 0; i < NUM_CARDS_IN_DECK; i++)
	{
		struct Card temp = deck[i];
		int random_index = rand() % NUM_CARDS_IN_DECK;
		deck[i] = deck[random_index];
		deck[random_index] = temp;
	}
}

void print_deck(struct Card* deck)
{
	for (int k = 0; k < NUM_CARDS_IN_DECK; ++k)
	{
		char* card_name = get_card_name(&deck[k]);
		printf("%s\n", card_name);
		free(card_name);
		card_name = 0;
	}
}

char* get_card_name(struct Card* card)
{
	assert(card->rank <= 13);
	assert(card->rank >= 1);
	
	char* name = malloc(24);
	assert(name);
	name[0] = '\0';
	
	switch (card->rank)
	{
		case 1:
		{
			strcat(name, "Ace");
			break;
		}
		case 11:
		{
			strcat(name, "Jack");
			break;
		}
		case 12:
		{
			strcat(name, "Queen");
			break;
		}
		case 13:
		{
			strcat(name, "King");
			break;
		}
		case 2: // Fall through...
		case 3: // Fall through...
		case 4: // Fall through...
		case 5: // Fall through...
		case 6: // Fall through...
		case 7: // Fall through...
		case 8: // Fall through...
		case 9: // Fall through...
		case 10: // Fall through...
		{
			char num_name[10];
			sprintf(num_name, "%d", card->rank);
			strcat(name, num_name);
			break;
		}
		default:
		{
			assert(0); //INVALID RANK!
			break;
		}
	}

	strcat(name, " of ");
	
	if (card->suit == CLUBS)
	{
		strcat(name, "Clubs");
	}
	else if (card->suit == HEARTS)
	{
		strcat(name, "Hearts");
	}
	else if (card->suit == DIAMONDS)
	{
		strcat(name, "Diamonds");
	}
	else if (card->suit == SPADES)
	{
		trcat(name, "Spades");
	}
	else
	{
		assert(0); // INVALID CARD SUIT!
	}
	
	return name;
}


























