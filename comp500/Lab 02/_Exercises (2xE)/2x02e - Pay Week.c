#include <stdio.h>

int main(void)
{
	int week = 0;
	char pay;
	float spent = 0.0f;

	printf("Week of year? ");
	scanf("%d", &week);

	printf("Pay week? ");
	scanf(" %c", &pay);

	printf("Dollars spent? ");
	scanf("%f", &spent);

	printf("\nWeek: %d, Pay week: %c, Dollars spent: $%.2f", week, pay, spent);

	return 0;
}