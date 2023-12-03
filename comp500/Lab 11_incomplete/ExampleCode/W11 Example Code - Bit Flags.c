#include <stdio.h>

enum Flag
{
	OPTION1 = 1,
	OPTION2 = 2,
	OPTION3 = 4,
	OPTION4 = 8,
	OPTION5 = 16,
	OPTION6 = 32
};

void print_flag(int flag)
{
	switch (flag)
	{
		case OPTION1:
			{
				printf("Option 1\n");
			}
		break;
		case OPTION2:
			{
				printf("Option 2\n");
			}
		break;
		case OPTION3:
			{
				printf("Option 3\n");
			}
		break;
		case OPTION4:
			{
				printf("Option 4\n");
			}
		break;
		case OPTION5:
			{
				printf("Option 5\n");
			}
		break;
		case OPTION6:
			{
				printf("Option 6\n");
			}
		break;
		default:
			{
				printf("Unknown Flag!\n");
			}
		break;
	}
}

void print_status(int status)
{
	for (int k = 0; k < 6; ++k)
	{
		int bit_to_check = 1 << k;
		if (status & bit_to_check)
		{
			print_flag(bit_to_check);
		}
	}
}

int main(void)
{
	int main_status = OPTION2 | OPTION4 | OPTION5;
	print_status(main_status);
	
	return 0;
}