/*
// DESIGN
	IF type == INT
		CAST data TO INT* (the address of an int)
		PRINT data AS int
	ELSE IF type == FLOAT
		CAST data TO FLOAT* (the address of a float)
		PRINT data AS float
	ELSE IF type == CHAR
		CAST data TO CHAR* (the address of a char)
		PRINT data AS char
	ELSE IF type == STRING
		CAST data TO CHAR* (the address of a char)
		PRINT data AS C-String
	ENDIF

	PRINT newline
*/

#include <stdio.h>

enum DataType
{
	INT,
	FLOAT,
	CHAR,
	STRING
};

void print_data(void* data, enum DataType type);

int main(void)
{
	int number = 47;
	float real = 4.7f;
	char letter = 't';
	char text[] = "C-String text";

	print_data(&number, INT);
	print_data(&real, FLOAT);
	print_data(&letter, CHAR);
	print_data(text, STRING);

	return 0;
}

void print_data(void* data, enum DataType type)
{
	if (type == INT)
	{
		printf("%d", *(int*)data);
	}
	else if (type == FLOAT)
	{
		printf("%f", *(float*)data);
	}
	else if (type == CHAR)
	{
		printf("%c", *(char*)data);
	}
	else if (type == STRING)
	{
		printf("%s", (char*)data);
	}

	printf("\n");
}