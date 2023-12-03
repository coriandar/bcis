#include <stdio.h>

struct Movie
{
	char title[32];
	int runtime;
	float tomato;
};

void print_space(int space);
void print_movie(struct Movie movie);

int main(void)
{
	struct Movie movie;

	sprintf(movie.title, "Batman Returns");
	movie.runtime = 126;
	movie.tomato = 0.81f;

	print_movie(movie);

	return 0;
}

void print_movie(struct Movie movie)
{
	printf("Movie title:");
	print_space(8);
	printf("%s\n", movie.title);

	printf("Runtime in minutes:");
	print_space(1);
	printf("%d\n", movie.runtime);

	printf("Tomatometer Score:");
	print_space(2);
	printf("%.2f\n", movie.tomato);
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}