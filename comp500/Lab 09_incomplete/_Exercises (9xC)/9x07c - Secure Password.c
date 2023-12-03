#include <stdio.h>
#include <string.h>

enum Password_Strength
{
	TOO_WEAK,
	STRONG_ENOUGH
};

typedef struct
{
	int upper;
	int lower;
} Letter_Count;

enum Password_Strength is_secure_password(char* password);
int count_digit(int length, char* password);
Letter_Count count_letter(int length, char* password);

int main(void)
{
	char test_password[32];

	do
	{
		printf("Choose a password: ");
		scanf("%31s", test_password);
	}
	while (is_secure_password(test_password) == TOO_WEAK);

	printf("%s is secure enough!\n", test_password);

	return 0;
}

enum Password_Strength is_secure_password(char* password)
{
	// TODO: Insert your code here...
	int length = strlen(password);
	const int MIN = 8;
	const int MAX = 12;
	Letter_Count letters = count_letter(length, password);
	int digits = count_digit(length, password);
	int check = TOO_WEAK;

	if (MIN <= length && length <= MAX)
	{
		if (digits > 1)
		{
			if (letters.lower >= 2 && letters.upper >= 2)
			{
				check =  STRONG_ENOUGH;
			}
		}
	}

	return check;

	// TODO: Temporary stub return...
	//printf("\n%d\n", length);
	//return TOO_WEAK;
	//return STRONG_ENOUGH;
}

int count_digit(int length, char* password)
{
	int count_digit = 0;

	for (int index = 0; index < length; index++)
	{
		if ('0' <= password[index] && password[index] <= '9')
		{
			count_digit++;
		}
	}

	return count_digit;
}

Letter_Count count_letter(int length, char* password)
{
	Letter_Count count_letter;

	count_letter.upper = 0;
	count_letter.lower = 0;

	for (int index = 0; index < length; index++)
	{
		if ('A' <= password[index] && password[index] <= 'Z')
		{
			count_letter.upper++;
		}

		if ('a' <= password[index] && password[index] <= 'z')
		{
			count_letter.lower++;
		}
	}

	return count_letter;
}