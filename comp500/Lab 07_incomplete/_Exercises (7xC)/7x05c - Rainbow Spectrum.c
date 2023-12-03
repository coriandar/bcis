#include <stdio.h>

void print_colour(int wave_length);
void check_colour(int wave_length);

int main(void)
{
	printf("Enter a wavelength in nanometers: ");
	int wave_length = 0;
	scanf("%d", &wave_length);

	print_colour(wave_length);

	return 0;
}

void print_colour(int wave_length)
{
	printf("%dnm is ", wave_length);
	check_colour(wave_length);
	printf("\n");
}

void check_colour(int wave_length)
{
	if (400 <= wave_length && wave_length <= 449)
	{
		printf("violet");
	}
	else if (450 <= wave_length && wave_length <= 489)
	{
		printf("blue");
	}
	else if (490 <= wave_length && wave_length <= 519)
	{
		printf("cyan");
	}
	else if (520 <= wave_length && wave_length <= 559)
	{
		printf("green");
	}
	else if (560 <= wave_length && wave_length <= 589)
	{
		printf("yellow");
	}
	else if (590 <= wave_length && wave_length <= 634)
	{
		printf("orange");
	}
	else if (635 <= wave_length && wave_length <= 700)
	{
		printf("red");
	}
	else
	{
		printf("invisible");
	}
}