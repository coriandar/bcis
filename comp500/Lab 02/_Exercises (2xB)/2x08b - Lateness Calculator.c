#include <stdio.h>

int main(void)
{
	//need from seconds to minutes and sec.
	int sec = 0;
	int m = 0;
	int s = 0;

	printf("How many seconds late? ");
	scanf("%d", &sec);

	m = sec / 60;
	s = sec - (m * 60);

	printf("\nThe student was %d minutes and %d seconds late.", m, s);

	return 0;
}