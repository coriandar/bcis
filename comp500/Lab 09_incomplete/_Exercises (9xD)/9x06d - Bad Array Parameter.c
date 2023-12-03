#include <stdio.h>

void print_date(int date[])
{
	// Prints in the from DD/MM/YYYY
	printf("%02d/%02d/%d\n", date[0], date[1], date[2]);
}

int main(void)
{
	int today[3];

	today[0] = 21;
	today[1] = 10;
	today[2] = 2016;

	print_date(today);

	return 0;
}