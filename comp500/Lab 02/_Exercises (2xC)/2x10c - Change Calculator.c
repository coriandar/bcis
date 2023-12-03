#include <stdio.h>

int main(void)
{
	int cents = 0;
	int two_dol = 0;
	int one_dol = 0;
	int fifty_c = 0;
	int twenty_c = 0;
	int ten_c = 0;
	int five_c = 0;
	int two_c = 0;
	int one_c = 0;

	printf("Number of cents? ");
	scanf("%d", &cents);

	two_dol = cents / 200;
	printf("%d two dollar\n", two_dol);

	one_dol = (cents % 200) / 100;
	printf("%d one dollar\n", one_dol);

	fifty_c = (((cents % 200) % 100) / 50);
	printf("%d fifty cent\n", fifty_c);

	twenty_c = ((((cents % 200) % 100) % 50) / 20);
	printf("%d twenty cent\n", twenty_c);

	ten_c = (((((cents % 200) % 100) % 50) % 20) / 10);
	printf("%d ten cent\n", ten_c);

	five_c = ((((((cents % 200) % 100) % 50) % 20) % 10) / 5);
	printf("%d five cent\n", five_c);

	two_c = (((((((cents % 200) % 100) % 50) % 20) % 10) % 5) / 2);
	printf("%d two cent\n", two_c);

	one_c = ((((((((cents % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1);
	printf("%d one cent\n", one_c);

	return 0;
}