#include <stdio.h>

int main(void)
{
	int whole_num = 0;
	char ASCII = 0;
	float real_num = 0;

	printf("Whole number? ");
	scanf("%d", &whole_num);

	printf("ASCII character? ");
	scanf(" %c", &ASCII);

	printf("Real number? ");
	scanf("%f", &real_num);

	printf("\nThe user's input was:\n\n");

	printf("Whole number is:     %d\n", whole_num);
	printf("ASCII character is:  %c\n", ASCII);
	printf("Real number is:      %f\n", real_num);

	return 0;
}