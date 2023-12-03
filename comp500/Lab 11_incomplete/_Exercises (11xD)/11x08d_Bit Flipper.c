#include <stdio.h>

void flip_bit(int* p_number, int bit);

int main(void)
{
	int user_bit = 0;
	int number = 0;
	int looping = 1;

	while (looping)
	{
		printf("%d --- ", number);
		printf("Flip which bit? ");
		scanf("%d", &user_bit);
		flip_bit(&number, user_bit);
	}

	return 0;
}

void flip_bit(int* p_number, int bit)
{
	// TODO: Insert bit flipping code here...
}