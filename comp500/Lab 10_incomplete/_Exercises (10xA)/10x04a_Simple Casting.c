#include <stdio.h>

int main(void)
{
	int left = 0;
	int right = 0;
	float division = 0.0f;

	printf("> ");
	scanf("%d", &left);
	printf("> ");
	scanf("%d", &right);

	//TODO: Fix the warning caused by the line below:
	division = (float)left / (float)right;

	printf("%d / %d is %f\n", left, right, division);

	return 0;
}