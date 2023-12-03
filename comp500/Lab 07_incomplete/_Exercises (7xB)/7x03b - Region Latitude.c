#include <stdio.h>

char get_climate_zone(int latitude);
void print_report(char region_1, char region_2, int latitude);

int main(void)
{
	printf("First region code character\? ");
	char region_1 = '\0';
	scanf(" %c", &region_1);

	printf("Second region code character\? ");
	char region_2 = '\0';
	scanf(" %c", &region_2);

	printf("Latitude\? ");
	int latitude = '\0';
	scanf("%d", &latitude);

	print_report(region_1, region_2, latitude);

	return 0;
}

char get_climate_zone(int latitude)
{
	char climate_zone = '\0';

	if (latitude < 0 )
	{
		climate_zone = 'X';
	}
	else if (0 <= latitude && latitude < 24)
	{
		climate_zone = 'R';
	}
	else if (24 <= latitude && latitude < 40)
	{
		climate_zone = 'D';
	}
	else if (40 <= latitude && latitude < 61)
	{
		climate_zone = 'T';
	}
	else if (61 <= latitude)
	{
		climate_zone = 'C';
	}

	return climate_zone;
}

void print_report(char region_1, char region_2, int latitude)
{
	printf("\n");
	printf("%c%c ", region_1, region_2);
	printf("at latitude %d ", latitude);
	printf("is climate zone ");
	printf("%c.\n", get_climate_zone(latitude));
}