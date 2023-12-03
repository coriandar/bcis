#include <stdio.h>

void print_newline(int newline);
int is_hex0_valid(char hex0);
int is_hex1_valid(char hex1);
int convert_hex_to_dec(char hex0, char hex1);

int main(void)
{
	printf("Input a two-digit hexadecimal number: ");
	char hex[3];
	scanf("%2s", &hex);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
	
	int valid0 = is_hex0_valid(hex[0]);
	int valid1 = is_hex1_valid(hex[1]);

	if (valid0 == 1 && valid1 == 1)
	{
		print_newline(1);
		int dec = convert_hex_to_dec(hex[0], hex[1]);
		printf("%c%c (Base-16) is %d (Base-10)", hex[0], hex[1], dec);
		print_newline(1);
	}
	else
	{
		print_newline(1);
		printf("Input is not a hexadecimal number!");
		print_newline(1);
	}
	
	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
	printf("\n");
	}
	return;
}

int convert_hex_to_dec(char hex0, char hex1)
{
	int hex0_int = 0;
	int hex1_int = 0;

	if (65 <= hex0 && hex0 <= 70)
	{
		hex0_int = hex0 - 55;
	}
	else if (48 <= hex0 && hex0 <= 57)
	{
		hex0_int = hex0 - 48;
	}

	if (65 <= hex1 && hex1 <= 70)
	{
		hex1_int = hex1 - 55;
	}
	else if (48 <= hex1 && hex1 <= 57)
	{
		hex1_int = hex1 - 48;
	}

	return (hex0_int * 16) + (hex1_int * 1);
}

int is_hex0_valid(char hex0)
{
	int valid0 = -1;

	if (65 <= hex0 && hex0 <= 70)
	{
		valid0 = 1;
	}
	else if (48 <= hex0 && hex0 <= 57)
	{
		valid0 = 1;
	}
	else
	{
		valid0 = 0;
	}

	return valid0;
}

int is_hex1_valid(char hex1)
{
	int valid1 = -1;

	if (65 <= hex1 && hex1 <= 70)
	{
		valid1 = 1;
	}
	else if (48 <= hex1 && hex1 <= 57)
	{
		valid1 = 1;
	}
	else
	{
		valid1 = 0;
	}

	return valid1;
}