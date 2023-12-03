#include <stdio.h>

void print_many(int times, void(*to_print)(void));
void print_nose_cone(int how_many_rockets);
void print_blank_panel(int how_many_rockets);
void print_logo_panel(int how_many_rockets);
void print_nose_cone_row_1(void);
void print_nose_cone_row_2(void);
void print_nose_cone_row_3(void);
void print_join(void);
void print_panel(void);
void print_n_logo(void);
void print_z_logo(void);
void print_rocket_logo(void);

int main(void)
{
	printf("Prepare how many rockets for launch? ");
	int rockets_required = 0;
	scanf("%d", &rockets_required);
	printf("\n");
	
	print_nose_cone(rockets_required);
	print_blank_panel(rockets_required);
	print_logo_panel(rockets_required);
	print_blank_panel(rockets_required);
	print_nose_cone(rockets_required);
	
	return 0;
}

void print_many(int times, void(*to_print)(void))
{
	for (int k = 0; k < times; ++k)
	{
		to_print();
	}

	printf("\n");
}

void print_nose_cone(int how_many_rockets)
{
	print_many(how_many_rockets, print_nose_cone_row_1);
	print_many(how_many_rockets, print_nose_cone_row_2);
	print_many(how_many_rockets, print_nose_cone_row_3);
}

void print_blank_panel(int how_many_rockets)
{
	print_many(how_many_rockets, print_join);
	print_many(how_many_rockets, print_panel);
	print_many(how_many_rockets, print_panel);
	print_many(how_many_rockets, print_panel);
	print_many(how_many_rockets, print_join);
}

void print_logo_panel(int how_many_rockets)
{
	print_many(how_many_rockets, print_n_logo);
	print_many(how_many_rockets, print_z_logo);
	print_many(how_many_rockets, print_rocket_logo);
}

void print_nose_cone_row_1(void)
{
	printf(" /\\ ");
}

void print_nose_cone_row_2(void)
{
	printf(" / \\ ");
}

void print_nose_cone_row_3(void)
{
	printf(" / \\ ");
}

void print_join(void)
{
	printf("+------+ ");
}

void print_panel(void)
{
	printf("| | ");
}

void print_n_logo(void)
{
	printf("| N | ");
}

void print_z_logo(void)
{
	printf("| Z | ");
}

void print_rocket_logo(void)
{
	printf("|Rocket| ");
}