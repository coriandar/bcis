#include<stdio.h>

int main(void)
{
	int index = 0;
	char my_string[12];

	my_string[0] = 'H';
	my_string[1] = 'e';
	my_string[2] = 'l';
	my_string[3] = 'l';
	my_string[4] = 'o';
	my_string[5] = ' ';
	my_string[6] = 'w';
	my_string[7] = 'o';
	my_string[8] = 'r';
	my_string[9] = 'l';
	my_string[10] = 'd';
	my_string[11] = '\0';

	printf("sizeof \"index\" is %zu byte(s).\n\n", sizeof(index));

	printf("sizeof \"one_over\" is %zu byte(s).\n\n", sizeof(my_string));

	float size_of = sizeof(my_string) / sizeof(char);
	printf("Dimension of \"one_over\" array is %.0f.\n\n", size_of);

	printf("Which element in \"my_string\" do you wish to look up...\n");
	printf("> ");
	scanf("%d", &index);

	printf("\n\"index\" stores the value %d.\n\n", index);

	printf("\"my_string[%d]\" stores the value: %c.\n", index, my_string[index]);

	return 0;
}	