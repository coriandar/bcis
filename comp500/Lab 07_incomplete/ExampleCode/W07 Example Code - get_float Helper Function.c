#include <stdio.h>

float get_float(void);
void print_prompt(void);
void clear_scanf_buffer(void);

void clear_scanf_buffer(void)
{
	char ignore = 0;
	do
	{
		scanf("%c", &ignore);
	}
	while (ignore != '\n');
}

float get_float(void)
{
	float input = 0;
	int scan_success = 0;
	
	do
	{
		print_prompt();
		scan_success = scanf("%f", &input);
		
		if (scan_success == 0)
		{
			printf("Try again (must be ");
			printf("real number)...\n");
			clear_scanf_buffer();
		}
	}
	while (scan_success == 0);
	
	clear_scanf_buffer();
	
	return input;
}

void print_prompt(void)
{
	printf("> ");
}

int main(void)
{
	float input = get_float();
	printf("Input was %f\n", input);
	return 0;
}