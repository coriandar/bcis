#include <stdio.h>

void print_space(int space);
float compute_bill(int number_of_nights, float room_rate, float minibar);
void print_bill(int number_of_nights, float room_rate, float minibar);

int main(void)
{
	int number_of_nights = 0;
	float room_rate = 0.0f;
	float minibar = 0.0f;

	printf("Number of nights? ");
	scanf("%d", &number_of_nights);

	printf("Room rate? ");
	scanf("%f", &room_rate);

	printf("Minibar? ");
	scanf("%f", &minibar);

	printf("\n");

	print_bill(number_of_nights, room_rate, minibar);

	return 0;
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}

float compute_bill(int number_of_nights, float room_rate, float minibar)
{
	return (((number_of_nights * 1.0f) * room_rate) + minibar);
}

void print_bill (int number_of_nights, float room_rate, float minibar)
{
	printf("Nights:");
	print_space(4);
	printf("%d\n", number_of_nights);

	printf("Room rate:");
	print_space(1);
	printf("$%6.2f\n", room_rate);

	printf("Minibar:");
	print_space(3);
	printf("$%6.2f\n", minibar);

	printf("------------------\n");
	printf("Total:");
	print_space(5);
	printf("$%6.2f", compute_bill(number_of_nights, room_rate, minibar));
	printf("\n");
}