#include <stdio.h>

int main(void)
{
	int input = 0;
	int n_100 = 0;
	int n_50 = 0;
	int n_20 = 0;
	int n_10 = 0;
	int n_5 = 0;
	int n_2 = 0;
	int n_1 = 0;
	int mod_50 = 0;
	int mod_20 = 0;
	int mod_10 = 0;
	int mod_5 = 0;
	int mod_2 = 0;
	int mod_1 = 0;

	printf("Bank Note Calculator\n");
	printf("--------------------\n\n");

	printf("Amount in dollars? ");
	scanf("%d", &input);

	printf("\nBank notes required:\n\n");

	//n_100 = input / 100;
	n_100 = input / 100;
	printf("%d x $100\n", n_100);

	//n_50 = (input % 100)/50;
	mod_50 = (input % 100);
	n_50 = mod_50 / 50;
	printf("%d x $50\n", n_50);

	//n_20 = ((input % 100) % 50) / 20;
	mod_20 = (mod_50 % 50);
	n_20 = mod_20 / 20;
	printf("%d x $20\n", n_20);

	//n_10 = (((input % 100) % 50) % 20) / 10;
	mod_10 = (mod_20 % 20);
	n_10 = mod_10 / 10;
	printf("%d x $10\n", n_10);

	//n_5 = ((((input % 100) % 50) % 20) % 10) / 5;
	mod_5 = (mod_10 % 10);
	n_5 = mod_5 / 5;
	printf("%d x $5\n", n_5);

	//n_2 = (((((input % 100) % 50) % 20) % 10) % 5) / 2;
	mod_2 = (mod_5 % 5);
	n_2 = mod_2 / 2;
	printf("%d x $2\n", n_2);

	//n_1 = ((((((input % 100) % 50) % 20) % 10) % 5) % 2) /1;
	mod_1 = (mod_2 % 2);
	n_1 = mod_1 / 1;
	printf("%d x $1\n", n_1);

	return 0;
}