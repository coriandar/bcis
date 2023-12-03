//Ask the user for three values, a number of hours, minutes and seconds. Ensure that the pluralisation of the time units is correct.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Hours\? ");
	int h = 0;
	scanf("%d", &h);

	printf("Minutes\? ");
	int m = 0;
	scanf("%d", &m);

	printf("Seconds\? ");
	int s = 0;
	scanf("%d", &s);

	printf("\n");

	printf("%d hour%s, ", h, (h == 1 ) ? "" : "s");
	printf("%d minute%s ", m, (m == 1 ) ? "" : "s");
	printf("and %d second%s.", s, (s == 1 ) ? "" : "s");

	return 0;
}