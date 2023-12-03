#include <stdio.h>

int main(void)
{
	// Converting a month input as an int, into text (a C-String)...
	
	// 2D Array: An array of C-Strings...
	char* season[] = { "Summer", "Autumn", "Winter", "Spring" };
	
	// Ask the user for month:
	printf("Month (Jan is 1, Feb is 2, ..., Dec is 12)? ");
	int month = 0;
	scanf("%d", &month);
	
	// Ensure the month index is between 0 and 3:
	int index = month % 12;
	index /= 3;
	
	// Look up the C-String based upon the index:
	printf("\nSeason: %s!", season[index]);
	
	return 0;
}