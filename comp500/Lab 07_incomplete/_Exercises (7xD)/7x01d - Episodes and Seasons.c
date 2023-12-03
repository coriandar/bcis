#include <stdio.h>

void print_diagram(int seasons, int episodes_per_season);
int compute_total_episodes(int seasons, int episodes_per_season);
int compute_remaining(int total_episodes);

int main(void)
{
	printf("Number of episodes per season\? ");
	int episodes_per_season = 0;
	scanf("%d", &episodes_per_season);

	printf("Number of seasons\? ");
	int seasons = 0;
	scanf("%d", &seasons);

	print_diagram(seasons, episodes_per_season);

	return 0;
}

void print_diagram(int seasons, int episodes_per_season)
{
	printf("\n");
	printf(" ");
	printf("\\/\n");
	printf("+--+\n");
	printf("|TV| Latest Episode : ");
	printf("%d", seasons);
	printf("x");
	printf("%d", episodes_per_season);
	printf("\n");
	printf("+--+\n");
	printf("\n");

	int total_episodes = compute_total_episodes(seasons, episodes_per_season);

	printf("Total number of episodes: ");
	printf("%d\n", total_episodes);

	printf("The show needs to produce ");
	printf("%d ", compute_remaining(total_episodes));
	printf("more episodes to reach 100!\n");
}

int compute_total_episodes(int seasons, int episodes_per_season)
{
	return seasons * episodes_per_season;
}

int compute_remaining(int total_episodes)
{
	return 100 - total_episodes;
}