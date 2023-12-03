#include <stdio.h>

int main(void)
{
	int index = 0;
	int triangle_numbers[5] = { 1, 3, 6, 10, 15 };

	printf("sizeof \"index\" is %zu byte(s).\n\n", sizeof(index));

	printf("sizeof \"triangle_numbers\" is %zu byte(s).\n\n", sizeof(triangle_numbers));

	int size_of = sizeof(triangle_numbers) / sizeof(int);
	printf("Dimension of \"triangle_numbers\" array is %d.\n\n", size_of);

	printf("Which element in \"triangle_numbers\" do you wish to look up...\n");
	printf("> ");
	scanf("%d", &index);

	printf("\n\"index\" stores the value %d.\n\n", index);

	printf("\"triangle_numbers[%d]\" stores the value: %d.\n", index, triangle_numbers[index]);

	return 0;
}