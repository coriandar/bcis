#include <stdio.h>
#include <math.h>

int main(void)
{
	int sec = 0;
	int h = 0;
	int m = 0;
	int s = 0;

	//convert to hours divide 3600

	printf("Number of seconds? ");
	scanf("%d", &sec);

	h = sec / 3600;
	m = (sec - (3600 * h)) / 60;
	s = (sec - (3600 * h)) - (m*60);

	printf("\n%d hour(s), %d minute(s), %d second(s).", h, m, s);



	return 0;
}