#include <stdio.h>
#include <string.h>

typedef struct Character_Counts
{
	int vowels;
	int consonants;
	int uppercase;
	int lowercase;
	int spaces;
	int digits;
} Char_Count;

Char_Count analyse_text(char text[]);
void print_counts(Char_Count data);

int main(void)
{
	printf("> ");
	char buffer[80];
	scanf("%79[^\n]", buffer);

	Char_Count results = analyse_text(buffer);
	print_counts(results);

	return 0;
}

Char_Count analyse_text(char text[])
{
	Char_Count result_analysis;
	result_analysis.vowels = 0;
	result_analysis.consonants = 0;
	result_analysis.uppercase = 0;
	result_analysis.lowercase = 0;
	result_analysis.spaces = 0;
	result_analysis.digits = 0;

	for (int index = 0; text[index] != '\0'; index++)
	{
		// Numbers check
		if ('0' <= text[index] && text[index] <= '9')
		{
			result_analysis.digits++;
		}

		// Spaces check
		if (text[index] == ' ')
		{
			result_analysis.spaces++;
		}

		// Uppercase check
		if ('A' <= text[index] && text[index] <= 'Z')
		{
			result_analysis.uppercase++;
		}

		// Lowercase check
		if ('a' <= text[index] && text[index] <= 'z')
		{
			result_analysis.lowercase++;
		}

		// Consonants_Upper
		if ('B' <= text[index] && text[index] <= 'D')
		{
			result_analysis.consonants++;
		}
		else if ('F' <= text[index] && text[index] <= 'H')
		{
			result_analysis.consonants++;
		}
		else if ('J' <= text[index] && text[index] <= 'N')
		{
			result_analysis.consonants++;
		}
		else if ('P' <= text[index] && text[index] <= 'T')
		{
			result_analysis.consonants++;
		}
		else if ('V' <= text[index] && text[index] <= 'Z')
		{
			result_analysis.consonants++;
		}

		// Consonants_Upper
		if ('b' <= text[index] && text[index] <= 'd')
		{
			result_analysis.consonants++;
		}
		else if ('f' <= text[index] && text[index] <= 'h')
		{
			result_analysis.consonants++;
		}
		else if ('j' <= text[index] && text[index] <= 'n')
		{
			result_analysis.consonants++;
		}
		else if ('p' <= text[index] && text[index] <= 't')
		{
			result_analysis.consonants++;
		}
		else if ('v' <= text[index] && text[index] <= 'z')
		{
			result_analysis.consonants++;
		}

		//Vowel check
		switch (text[index])
		{
		case 'A': // Fall through
		case 'a':
			result_analysis.vowels++;
			break;
		case 'E': // Fall through
		case 'e':
			result_analysis.vowels++;
			break;
		case 'I': // Fall through
		case 'i':
			result_analysis.vowels++;
			break;
		case 'O': // Fall through
		case 'o':
			result_analysis.vowels++;
			break;
		case 'U': // Fall through
		case 'u':
			result_analysis.vowels++;
			break;
		}
	}

	return result_analysis;
}


void print_counts(Char_Count data)
{
	printf("Vowels = %d\n", data.vowels);
	printf("Consonants = %d\n", data.consonants);
	printf("Uppercase = %d\n", data.uppercase);
	printf("Lowercase = %d\n", data.lowercase);
	printf("Spaces = %d\n", data.spaces);
	printf("Digits = %d\n", data.digits);
}