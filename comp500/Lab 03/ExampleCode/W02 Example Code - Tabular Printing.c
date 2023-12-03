#include <stdio.h>

int main(void)
{
	int year[7] = { 2001, 2003, 2006, 2009, 2011, 2013, 2015 };
	int budget[7] = { 38, 76, 85, 85, 125, 160, 190 };
	int gross[7] = { 207, 236, 158, 363, 629, 789, 1516 };
	
	printf("                                      ");
	printf(" Year Budget Gross\n");
	printf("The Fast and the Furious              ");
	printf("%6d $%5dm $%5dm\n", year[0], budget[0], gross[0]);
	
	printf("2 Fast 2 Furious                      ");
	printf("%6d $%5dm $%5dm\n", year[1], budget[1], gross[1]);
	
	printf("The Fast and the Furious: Tokyo Drift ");
	printf("%6d $%5dm $%5dm\n", year[2], budget[2], gross[2]);
	
	printf("Fast & Furious:                       ");
	printf("%6d $%5dm $%5dm\n", year[3], budget[3], gross[3]);
	
	printf("Fast Five                             ");
	printf("%6d $%5dm $%5dm\n", year[4], budget[4], gross[4]);
	
	printf("Fast & Furious 6                      ");
	printf("%6d $%5dm $%5dm\n", year[5], budget[5], gross[5]);
	
	printf("Fast & Furious 7                      ");
	printf("%6d $%5dm $%5dm\n", year[6], budget[6], gross[6]);
	
	int total_spent = budget[0] + budget[1] + budget[2] + budget[3] + budget[4] + budget[5] + budget[6];
	
	int total_gross = gross[0] + gross[1] + gross[2] + gross[3] + gross[4] + gross[5] + gross[6];
	
	printf("\n ");
	printf(" Totals: $%5dm $%5dm\n", total_spent, total_gross);

	return 0;
}