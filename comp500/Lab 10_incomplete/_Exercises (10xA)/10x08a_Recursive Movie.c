/*
//LEARNT
Recursive compostion, move has sequel.
Structure, malloc to allocate memory and also save address.
Get data from 'prequel' 'sequel' nodes.
Basic recursion.

//DESIGN
Store in heap, malloc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

typedef struct Movie_Info
{
	char name[32];
	int year;
	int score;
	struct Movie_Info* prequel; // Added prequel
	struct Movie_Info* sequel;
} Movie;

void print_newline(int newline);
void print_movie(Movie* p_movie);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Movie jurrasic_park;
	Movie jurrasic_park_lost_world;
	Movie jurrasic_park_III;
	Movie jurrasic_world;

	Movie* p_jurrasic_park = malloc(sizeof(jurrasic_park));
	Movie* p_jurrasic_park_lost_world = malloc(sizeof(jurrasic_park_lost_world));
	Movie* p_jurrasic_park_III = malloc(sizeof(jurrasic_park_III));
	Movie* p_jurrasic_world = malloc(sizeof(jurrasic_world));

	sprintf(p_jurrasic_park->name, "Jurassic Park");
	p_jurrasic_park->year = 1993;
	p_jurrasic_park->score = 93;
	p_jurrasic_park->prequel = 0;
	p_jurrasic_park->sequel = p_jurrasic_park_lost_world;

	sprintf(p_jurrasic_park_lost_world->name, "The Lost World: Jurassic Park");
	p_jurrasic_park_lost_world->year = 1997;
	p_jurrasic_park_lost_world->score = 51;
	p_jurrasic_park_lost_world->prequel = p_jurrasic_park;
	p_jurrasic_park_lost_world->sequel = p_jurrasic_park_III;

	sprintf(p_jurrasic_park_III->name, "The Lost World: Jurassic Park");
	p_jurrasic_park_III->year = 2001;
	p_jurrasic_park_III->score = 50;
	p_jurrasic_park_III->prequel = p_jurrasic_park_lost_world;
	p_jurrasic_park_III->sequel = p_jurrasic_world;

	sprintf(p_jurrasic_world->name, "The Lost World: Jurassic Park");
	p_jurrasic_world->year = 2015;
	p_jurrasic_world->score = 72;
	p_jurrasic_world->prequel = p_jurrasic_park_III;
	p_jurrasic_world->sequel = 0;

	print_movie(p_jurrasic_park);
	
	free(p_jurrasic_park);
	free(p_jurrasic_park_lost_world);
	free(p_jurrasic_park_III);
	free(p_jurrasic_world);

	return 0;
}

void print_movie(Movie* p_movie)
{
	printf("Name: ");
	printf("%s", p_movie->name);
	print_newline(1);

	printf("Year of Release: ");
	printf("%d", p_movie->year);
	print_newline(1);

	printf("Rotten Tomatoes: ");
	printf("%d%%", p_movie->score);
	print_newline(1);

	printf("%s", p_movie->name);

	if (p_movie->sequel)
	{
		printf("'s ");
		printf("sequel was...");
		print_newline(2);
		print_movie(p_movie->sequel);
	}
	else
	{
		printf(" ");
		printf("has no sequel, yet!");
		print_newline(2);
	}
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++)
	{
		printf("\n");
	}
}