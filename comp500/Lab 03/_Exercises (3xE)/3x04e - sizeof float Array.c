#include<stdio.h>

int main(void)
{
	int index = 0;
	float one_over[9];
	
	one_over[0] = 1.0f / 2.0f;
	one_over[1] = 1.0f / 2.0f;
	one_over[2] = 1.0f / 3.0f;
	one_over[3] = 1.0f / 4.0f;
	one_over[4] = 1.0f / 5.0f;
	one_over[5] = 1.0f / 6.0f;
	one_over[6] = 1.0f / 7.0f;
	one_over[7] = 1.0f / 8.0f;
	one_over[8] = 1.0f / 9.0f;

	printf("sizeof \"index\" is %zu byte(s).\n\n", sizeof(index));

	printf("sizeof \"one_over\" is %zu byte(s).\n\n", sizeof(one_over));

	float size_of = sizeof(one_over) / sizeof(float);
	printf("Dimension of \"one_over\" array is %.0f.\n\n", size_of);

	printf("Which element in \"one_over\" do you wish to look up...\n");
	printf("> ");
	scanf("%d", &index);

	printf("\n\"index\" stores the value %d.\n\n", index);

	printf("\"one_over[%d]\" stores the value: %f.\n", index, one_over[index]);

	return 0;
}