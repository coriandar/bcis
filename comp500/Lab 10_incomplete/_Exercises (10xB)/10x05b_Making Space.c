#include <stdio.h>
#include <string.h>

void insert_space(char cstring[], int index, int spaces);
void print_space(int spaces);

int main(void)
{
	insert_space("helloworld", 5, 3);

	return 0;
}

void insert_space(char cstring[], int insert, int spaces)
{
	int length = strlen(cstring);

	for (int index = 0; index < length; index++)
	{
		printf("%c", cstring[index]);

		if (index + 1 == insert)
		{
			print_space(spaces);
		}
	}

}

void print_space(int spaces)
{
	for (int repeat = 0; repeat < spaces; repeat++, printf(" "));
}