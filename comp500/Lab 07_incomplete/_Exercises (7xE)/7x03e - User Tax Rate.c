#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float get_tax_rate(int earnings);
void print_report(char region_1, char region_2, float tax_rate);

int main(void)
{
	printf("Region code, first initial\? ");
	char region_1 = '\0';
	scanf(" %c", &region_1);

	printf("Region code, last initial\? ");
	char region_2 = '\0';
	scanf(" %c", &region_2);

	printf("Earnings amount\? ");
	int earnings = 0;
	scanf("%d", &earnings);

	float tax_rate = get_tax_rate(earnings);

	print_report(region_1, region_2, tax_rate);

	return 0;
}

float get_tax_rate(int earnings)
{
	float tax_rate = 0.0f;

	if (earnings <= 0)
	{
		tax_rate = 0.0f;
	}
	else if (0 < earnings && earnings < 35000)
	{
		tax_rate = 10.5f;
	}
	else if (35000 <= earnings && earnings < 64000)
	{
		tax_rate = 17.5f;
	}
	else if (64000 <= earnings && earnings <= 100000)
	{
		tax_rate = 30.0f;
	}
	else if (100000 < earnings)
	{
		tax_rate = 33.0f;
	}

	return tax_rate;
}

void print_report(char region_1, char region_2, float tax_rate)
{
	printf("\n");
	printf("Top tax rate is: %.1f ", tax_rate);
	printf("(%c%c region).\n", region_1, region_2);
}