#include <stdio.h>

int main(void)
{
	// to format data input.
	//week = int
	//week = y or no
	//attendance = float %.2f
	int week = 0;
	char late;
	float atten = 0.0f;

	printf("Week? ");
	scanf("%d", &week);

	printf("Late? ");
	// needs space to get rid white space in input buffer.
	scanf(" %c", &late);

	printf("Attendance percentage? ");
	scanf("%f", &atten);

	printf("\nWeek: %d, Late: %c, Attendance percentage: %.2f%%", week, late, atten);

	return 0;
}