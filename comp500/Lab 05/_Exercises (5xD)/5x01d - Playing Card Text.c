#include <stdio.h>

int main(void)
{
	printf("Suit (d/h/s/c): ");
	char suit = '\0';
	scanf(" %c", &suit);

	printf("Rank (A/2/3/4/5/6/7/8/9/T/J/Q/K): ");
	char rank = '\0';
	scanf(" %c", &rank);

	char print_suit[15] = "\0";
	int valid_suit = 0;

	switch (suit)
	{
	case 'd':
		sprintf(print_suit, "of Diamonds");
		valid_suit = 1;
		break;
	case 'h':
		sprintf(print_suit, "of Hearts");
		valid_suit = 1;
		break;
	case 's':
		sprintf(print_suit, "of Spades");
		valid_suit = 1;
		break;
	case 'c':
		sprintf(print_suit, "of Clubs");
		valid_suit = 1;
		break;
	default:
		valid_suit = 0;
		break;
	}

	char print_rank[10] = "\0";
	int valid_rank = 0;

	switch (rank)
	{
	case 'A':
		sprintf(print_rank, "Ace");
		valid_rank = 1;
		break;
	case '2':
		sprintf(print_rank, "Two");
		valid_rank = 1;
		break;
	case '3':
		sprintf(print_rank, "Three");
		valid_rank = 1;
		break;
	case '4':
		sprintf(print_rank, "Four");
		valid_rank = 1;
		break;
	case '5':
		sprintf(print_rank, "Five");
		valid_rank = 1;
		break;
	case '6':
		sprintf(print_rank, "Six");
		valid_rank = 1;
		break;
	case '7':
		sprintf(print_rank, "Seven");
		valid_suit = 1;
		break;
	case '8':
		sprintf(print_rank, "Eight");
		valid_rank = 1;
		break;
	case '9':
		sprintf(print_rank, "Nine");
		valid_rank = 1;
		break;
	case 'T':
		sprintf(print_rank, "Ten");
		valid_rank = 1;
		break;
	case 'J':
		sprintf(print_rank, "Jack");
		valid_suit = 1;
		break;
	case 'Q':
		sprintf(print_rank, "Queen");
		valid_rank = 1;
		break;
	case 'K':
		sprintf(print_rank, "King");
		valid_rank = 1;
		break;
	default:
		valid_rank = 0;
		break;
	}

	if (valid_suit == 1 && valid_rank == 1)
	{
		printf("\n%s %s\n", print_rank, print_suit);
	}
	else if (valid_suit == 0 && valid_rank == 0)
	{
		printf("\nInvalid Suit and invalid Rank\n");
	}
	else if (valid_suit == 0)
	{
		printf("\nInvalid Suit\n");
	}
	else if (valid_rank == 0)
	{
		printf("\nInvalid Rank\n");
	}

	return 0;
}