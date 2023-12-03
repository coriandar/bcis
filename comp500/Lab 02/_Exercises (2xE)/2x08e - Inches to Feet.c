#include <stdio.h>

int main(void)
{
	int inch_in = 0;
	int feet = 0;
	int inches = 0;

	printf("Measurement in inches? ");
	scanf("%d", &inch_in);

	printf("Converting...\n");

	feet = inch_in / 12;
	inches = inch_in % 12;

	printf("%d feet and %d inches.", feet, inches);

	return 0;
}