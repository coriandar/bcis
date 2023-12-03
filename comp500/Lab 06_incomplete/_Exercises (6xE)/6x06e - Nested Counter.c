#include <stdio.h>

int main(void)
{
	printf("> ");
	int height = 0;
	scanf("%d", &height);

	const int MAX_HEIGHT = height;

	if (height <= 0)
	{
		printf("Too small!\n");
	}
	else if (height >= 10)
	{
		printf("Too big!\n");
	}
	else
	{
		for (int row = 0; row < MAX_HEIGHT; row++)
		{
			for (int dot = 1; dot < height; dot++)
			{
				printf(".");
			}

			printf("%d", height);

			for (int dot = height; dot < MAX_HEIGHT; dot++)
			{
				printf(".");
			}

			height--;

			printf("\n");
		}
	}

	return 0;
}