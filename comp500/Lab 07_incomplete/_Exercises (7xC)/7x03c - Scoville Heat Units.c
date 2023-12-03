#include <stdio.h>

char get_spice_level(int scoville_heat_units);
void print_report(char id1, char id2, int scoville_heat_units);

int main(void)
{
	printf("Chili-pepper ID1\? ");
	char id1 = '\0';
	scanf(" %c", &id1);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("Chili-pepper ID2\? ");
	char id2 = '\0';
	scanf(" %c", &id2);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("Scoville Heat Units (SHU)\? ");
	int scoville_heat_units = 0;
	scanf("%d", &scoville_heat_units);

	print_report(id1, id2, scoville_heat_units);

	return 0;
}

char get_spice_level(int scoville_heat_units)
{
	char spice_level = '\0';

	if (0 <= scoville_heat_units && scoville_heat_units < 700)
	{
		spice_level = 'N';
	}
	else if (700 <= scoville_heat_units && scoville_heat_units < 3000)
	{
		spice_level = 'M';
	}
	else if (3000 <= scoville_heat_units && scoville_heat_units < 25000)
	{
		spice_level = 'A';
	}
	else if (25000 <= scoville_heat_units && scoville_heat_units <= 80000)
	{
		spice_level = 'H';
	}
	else if (80000 < scoville_heat_units)
	{
		spice_level = 'V';
	}

	return spice_level;
}

void print_report(char id1, char id2, int scoville_heat_units)
{
	printf("\n");
	printf("The %c%c chili pepper ", id1, id2);
	printf("(SHU: %d) ", scoville_heat_units);
	printf("is rated spice level ");
	printf("%c.", get_spice_level(scoville_heat_units));
	printf("\n");
}