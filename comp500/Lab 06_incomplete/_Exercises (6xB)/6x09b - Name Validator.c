/*
//IMPLEMENTATION
The program must then validate to ensure the first name starts with a capital letter, and contains only letters.

//DESIGN
Check each character in array is between ASCII range.
*/

#include <stdio.h>

int main(void)
{
	enum Check
	{
		PASS,
		FAIL,
		TRUE,
		FALSE
	};

	enum Check repeat = TRUE;
	char name[100];

	do
	{
		printf("What is your first name\? ");
		scanf("%99s", &name);

		if (65 <= name[0] && name[0]<= 90)
		{
			enum Check valid = PASS;
			int test = 0;

			for (int index = 1; name[index] != '\0'; index++)
			{
				if (97 <= name[index] && name[index] <= 122)
				{
					valid = PASS;
				}
				else
				{
					valid = FAIL;
				}

				test = test + valid;
			}

			if (test == 0)
			{
				printf("\n%s is a valid first name.\n", name);
				repeat = FALSE;
			}
		}

		if (repeat == TRUE)
		{
			printf("\nInvalid input! ");
		}
	}
	while (repeat == TRUE);

	return 0;
}