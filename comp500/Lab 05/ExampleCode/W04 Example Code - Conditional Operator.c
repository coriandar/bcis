#include <stdio.h>

int main(void)
{
	int total_seconds = 0;
	int seconds = 0;
	int minutes = 0;
	printf("Enter the number of seconds: ");
	scanf("%d", &total_seconds);
	minutes = total_seconds / 60;
	seconds = total_seconds % 60;
	printf("%d minute", minutes);
	printf("%s", (minutes == 1) ? "" : "s");
	printf(" and %d second", seconds);
	printf("%s", (seconds == 1) ? "" : "s");
	printf(".\n");
	return 0;
}