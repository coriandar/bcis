#include <stdio.h>

int count_vowels(char* pointer);

int main(void)
{
	char test_string[] = "CaN_i_progrAM?";

	int vowel_count = count_vowels(test_string);

	printf("String: %s\n", test_string);
	printf("Vowels: %d\n", vowel_count);

	return 0;
}

int count_vowels(char* pointer)
{
	int vowel_count = 0;

	do
	{
		switch (*pointer)
		{
		case 'A': // Fall through
		case 'a':
			vowel_count++;
			break;
		case 'E': // Fall through
		case 'e':
			vowel_count++;
			break;
		case 'I': // Fall through
		case 'i':
			vowel_count++;
			break;
		case 'O': // Fall through
		case 'o':
			vowel_count++;
			break;
		case 'U': // Fall through
		case 'u':
			vowel_count++;
			break;
		}

		pointer++;
	}
	while (*pointer != '\0');

	return vowel_count;
}