#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

typedef enum Purchases_Enum
{
	YES,
	NO
} Purchases;

typedef struct Video_Game_Structure
{
	char title[100];
	char genre[100];
	char developer[100];
	char platform[100];
	char in_app[3];
	float price;
	int year_release;
	int age_limit;
} Video_Game;

void print_video_game_details(Video_Game* game);
void assign_to_p_game1(Video_Game* game1);
void assign_to_p_game2(Video_Game* game2);
void assign_to_p_game3(Video_Game* game3);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Video_Game* p_game1 = 0;
	p_game1 = malloc(sizeof(Video_Game));
	assign_to_p_game1(p_game1);
	print_video_game_details(p_game1);
	free(p_game1);
	p_game1 = 0;

	Video_Game* p_game2 = 0;
	p_game2 = malloc(sizeof(Video_Game));
	assign_to_p_game2(p_game2);
	print_video_game_details(p_game2);
	free(p_game2);
	p_game2 = 0;

	Video_Game* p_game3 = 0;
	p_game3 = malloc(sizeof(Video_Game));
	assign_to_p_game3(p_game3);
	print_video_game_details(p_game3);
	free(p_game3);
	p_game3 = 0;

	return 0;
}

void print_video_game_details(Video_Game* game)
{
	printf("Title: ");
	printf("%s\n", game->title);

	printf("Genre: ");
	printf("%s\n", game->genre);

	printf("Developer: ");
	printf("%s\n", game->developer);

	printf("Year of Release: ");
	printf("%d\n", game->year_release);

	printf("Plaform: ");
	printf("%s\n", game->platform);

	printf("Lower Age Limit: ");
	printf("%d\n", game->age_limit);

	printf("Price: ");
	printf("$%.2f\n", game->price);

	printf("In-app Purchases: ");
	printf("%s\n", game->in_app);

	printf("\n");
}

void assign_to_p_game1(Video_Game* game1)
{
	sprintf(game1->title, "Candy Crush Saga");
	sprintf(game1->genre, "Match-Three Puzzle");
	sprintf(game1->developer, "King");
	sprintf(game1->platform, "Android, iOS, Windows Phone");
	game1->year_release = 2012;
	game1->age_limit = 7;
	game1->price = 0.0f;
	sprintf(game1->in_app, "Yes");
}

void assign_to_p_game2(Video_Game* game2)
{
	sprintf(game2->title, "Halo 4");
	sprintf(game2->genre, "First-Person Shooter");
	sprintf(game2->developer, "343 Industries");
	sprintf(game2->platform, "Xbox 360, Xbox One");
	game2->year_release = 2014;
	game2->age_limit = 16;
	game2->price = 69.95f;
	sprintf(game2->in_app, "Yes");
}

void assign_to_p_game3(Video_Game* game3)
{
	sprintf(game3->title, "Lost Odyssey");
	sprintf(game3->genre, "JRPG");
	sprintf(game3->developer, "Mistwalker Studios");
	sprintf(game3->platform, "Xbox 360");
	game3->year_release = 2007;
	game3->age_limit = 16;
	game3->price = 30.00f;
	sprintf(game3->in_app, "No");
}