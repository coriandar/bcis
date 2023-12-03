#include <stdio.h>

int main(void)
{
	int points_gain = 0;
	int points_left = 0;
	int points_max = 360;

	printf("How many points have you achieved thus far? ");
	scanf("%d", &points_gain);

	points_left = points_max - points_gain;
	printf("\nYou have %d points left!!!", points_left);

	return 0;
}