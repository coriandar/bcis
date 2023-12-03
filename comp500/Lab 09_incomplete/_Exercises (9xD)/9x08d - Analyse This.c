#include <stdio.h>

void analyse(char* code, int* p_a_count, int* p_z_count);

int main(void)
{
	char* secret_codes[] =
	{
		"AAA ZZZ AAA",							// SOS
		"ZZ ZZZ AZA AAA A",						// MORSE
		"ZAZA ZZZ ZAA A",						// CODE
		"ZAZA ZZZ ZZ AZZA AAAAA ZZZZZ ZZZZZ",	// COMP500
		"A ZA AAA A AAAAA ZZZZZ AZZZZ"			// ENSE501
	};

	int a_count = 0;
	int* p_a_count = &a_count;

	int z_count = 0;
	int* p_z_count = &z_count;

	// TODO: 2) Insert code here...
	for (int index = 0; index < 5; index++)
	{
		analyse(secret_codes[index], p_a_count, p_z_count);
		printf("%s\n", secret_codes[index]);
		printf("A count: %d\n", *p_a_count);
		printf("Z count: %d\n", *p_z_count);
		printf("\n");

		*p_a_count = 0;
		*p_z_count = 0;
	}

	return 0;
}

void analyse(char* code, int* p_a_count, int* p_z_count)
{
	// TODO: 1) Insert code here...
	for (int index = 0; code[index] != '\0'; index++)
	{
		if (code[index] == 'Z')
		{
			(*p_z_count)++;
		}
		else if (code[index] == 'A')
		{
			(*p_a_count)++;
		}
	}
}