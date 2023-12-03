#include <stdio.h>

int main(void)
{
	int n_1 = 0;
	int n_2 = 0;
	int n_3 = 0;
	printf("Please enter a whole number: ");
	scanf("%d", &n_1);

	printf("Please enter another whole number: ");
	scanf("%d", &n_2);

	printf("Please enter another whole number: ");
	scanf("%d", &n_3);

	printf("\n%d plus %d plus %d is %d", n_1, n_2, n_3, (n_1 + n_2 + n_3));

	return 0;
}