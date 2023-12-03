/*
// LEARNT
	Justify text alignment
	https://www.cprogramming.com/tutorial/printf-format-strings.html

	qsort struct ctring
	http://www.anyexample.com/programming/c/qsort__sorting_array_of_strings__integers_and_structs.xml
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Tag_Titles
{
	NONE,
	GAME,
	BRAND,
	SKU,
	STOCK,
	PRICE
};

typedef struct TagGame
{
	char name[32];
	char brand[32];
	int sku;
	int stock;
	float price;
} Game;

// sort ascending
int compare_by_sku(const void* a, const void* b);
int compare_by_stock(const void* a, const void* b);
int compare_by_price(const void* a, const void* b);
int compare_by_brand(const void *a, const void *b);
int compare_by_name(const void *a, const void *b);
void print_selection(void);
int get_sort_choice(void);
void fill_inventory(Game* all_games);
void select_qsort(Game* all_games, int sort_choice);
void print_inventory(Game* all_games, char* titles[]);
void print_space(int space);

int main(void)
{
	char* titles[] =
	{
		"",
		"Game Name",
		"Brand Name",
		"SKU",
		"S#",
		"Price"
	};

	print_selection();

	Game all_games[9];
	Game* p_all_games = all_games;

	fill_inventory(p_all_games);

	select_qsort(p_all_games, get_sort_choice());

	print_inventory(p_all_games, titles);

	return 0;
}

void print_selection(void)
{
	printf("Board Game Inventory - Choose sort option:\n");
	printf("=============================================\n\n");

	print_space(2);
	printf("1) Game Name\n");
	print_space(2);
	printf("2) Brand Name\n");
	print_space(2);
	printf("3) Stock Keeping Unit (SKU)\n");
	print_space(2);
	printf("4) Stock Level (S#)\n");
	print_space(2);
	printf("5) Retail Price\n\n");
}

int get_sort_choice(void)
{
	printf("Sort choice: ");
	int sort_choice = 0;
	scanf("%d", &sort_choice);

	return sort_choice;
}

void select_qsort(Game* all_games, int sort_choice)
{
	if (sort_choice == GAME)
	{
		qsort(all_games, 9, sizeof(Game), compare_by_name);
	}
	else if (sort_choice == BRAND)
	{
		qsort(all_games, 9, sizeof(Game), compare_by_brand);
	}
	else if (sort_choice == SKU)
	{
		qsort(all_games, 9, sizeof(Game), compare_by_sku);
	}
	else if (sort_choice == STOCK)
	{
		qsort(all_games, 9, sizeof(Game), compare_by_stock);
	}
	else if (sort_choice == PRICE)
	{
		qsort(all_games, 9, sizeof(Game), compare_by_price);
	}
}

void print_inventory(Game* all_games, char* titles[])
{
	for (int current = 0; current < 9; current++)
	{
		if (current == 0)
		{
			printf("+-----------------------+------------------+------+----+--------+\n");
			printf("| ");
			printf("%-21s", titles[GAME]);
			printf(" | ");
			printf("%-16s", titles[BRAND]);
			printf(" | ");
			printf("%-4s", titles[SKU]);
			printf(" | ");
			printf("%s", titles[STOCK]);
			printf(" | ");
			printf("%-6s", titles[PRICE]);
			printf(" |\n");
			printf("+-----------------------+------------------+------+----+--------+\n");
		}

		printf("| ");
		printf("%-21s", all_games[current].name);
		printf(" | ");
		printf("%-16s", all_games[current].brand);
		printf(" | ");
		printf("%4d", all_games[current].sku);
		printf(" | ");
		printf("%2d", all_games[current].stock);
		printf(" | ");
		printf("$%.2f", all_games[current].price);
		printf(" |\n");

		if (current == 8)
		{
			printf("+-----------------------+------------------+------+----+--------+\n");
		}
	}
}

void fill_inventory(Game* all_games)
{
	all_games[0].price = 86.95f;
	all_games[1].price = 61.99f;
	all_games[2].price = 83.50f;
	all_games[3].price = 71.80f;
	all_games[4].price = 77.00f;
	all_games[5].price = 85.60f;
	all_games[6].price = 44.50f;
	all_games[7].price = 52.50f;
	all_games[8].price = 78.90f;

	all_games[0].stock = 9;
	all_games[1].stock = 3;
	all_games[2].stock = 8;
	all_games[3].stock = 6;
	all_games[4].stock = 10;
	all_games[5].stock = 4;
	all_games[6].stock = 0;
	all_games[7].stock = 12;
	all_games[8].stock = 4;

	all_games[0].sku = 3136;
	all_games[1].sku = 3124;
	all_games[2].sku = 3109;
	all_games[3].sku = 3332;
	all_games[4].sku = 3144;
	all_games[5].sku = 3137;
	all_games[6].sku = 2233;
	all_games[7].sku = 2570;
	all_games[8].sku = 3149;

	sprintf(all_games[0].name, "Ticket to Ride");
	sprintf(all_games[1].name, "Carcassonne");
	sprintf(all_games[2].name, "Catan");
	sprintf(all_games[3].name, "King of Tokyo");
	sprintf(all_games[4].name, "Pandemic");
	sprintf(all_games[5].name, "Ticket to Ride Europe");
	sprintf(all_games[6].name, "Atlantis");
	sprintf(all_games[7].name, "Catan: Junior");
	sprintf(all_games[8].name, "Dominion");

	sprintf(all_games[0].brand, "Days of Wonder");
	sprintf(all_games[1].brand, "Z-Man Games");
	sprintf(all_games[2].brand, "Mayfair Games");
	sprintf(all_games[3].brand, "Iello");
	sprintf(all_games[4].brand, "Z-Man Games");
	sprintf(all_games[5].brand, "Days of Wonder");
	sprintf(all_games[6].brand, "Mayfair Games");
	sprintf(all_games[7].brand, "Mayfair Games");
	sprintf(all_games[8].brand, "Rio Grande Games");
}

void print_space(int space)
{
	for (int rep = 0; rep < space; rep++, printf(" "));
}

int compare_by_brand(const void *a, const void *b)
{
	Game* game_a = (Game*)a;
	Game* game_b = (Game*)b;

	return strcmp(game_a->brand, game_b->brand);
}

int compare_by_name(const void *a, const void *b)
{
	Game* game_a = (Game*)a;
	Game* game_b = (Game*)b;

	return strcmp(game_a->name, game_b->name);
}

int compare_by_sku(const void* a, const void* b)
{
	const Game* game_a = a;
	const Game* game_b = b;

	return (game_a->sku - game_b->sku);
}

int compare_by_stock(const void* a, const void* b)
{
	const Game* game_a = a;
	const Game* game_b = b;

	return (game_a->stock - game_b->stock);
}

int compare_by_price(const void* a, const void* b)
{
	const Game* game_a = a;
	const Game* game_b = b;

	return (game_a->price - game_b->price);
}