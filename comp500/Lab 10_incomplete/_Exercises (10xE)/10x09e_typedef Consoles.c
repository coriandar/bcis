#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

typedef struct tag_Console
{
	char name[32];
	int year;
	int ram;
	struct tag_Console* successor;

} Console;

void print_console(Console* console);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Console gamecube;
	Console wii;
	Console wii_u;
	Console n_switch;

	Console* p_gamecube = malloc(sizeof(gamecube));
	Console* p_wii = malloc(sizeof(wii));
	Console* p_wii_u = malloc(sizeof(wii_u));
	Console* p_n_switch = malloc(sizeof(n_switch));

	sprintf(p_gamecube->name, "Gamecube");
	p_gamecube->year = 2001;
	p_gamecube->ram = 43;
	p_gamecube->successor = p_wii;

	sprintf(p_wii->name, "Wii");
	p_wii->year = 2006;
	p_wii->ram = 88;
	p_wii->successor = p_wii_u;

	sprintf(p_wii_u->name, "Wii U");
	p_wii_u->year = 2012;
	p_wii_u->ram = 2048;
	p_wii_u->successor = p_n_switch;

	sprintf(p_n_switch->name, "Switch");
	p_n_switch->year = 2017;
	p_n_switch->ram = 4096;
	p_n_switch->successor = 0;

	print_console(p_gamecube);

	free(p_gamecube);
	p_gamecube = 0;

	free(p_wii);
	p_wii = 0;

	free(p_wii_u);
	p_wii_u = 0;

	free(p_n_switch);
	p_n_switch = 0;

	return 0;
}

void print_console(Console* console)
{
	printf("Name: ");
	printf("%s\n", console->name);

	printf("Year of Release: ");
	printf("%d\n", console->year);

	printf("RAM: ");
	printf("%d\n", console->ram);

	if (console->successor)
	{
		printf("The Nintendo ");
		printf("\'%s\' ", console->name);
		printf("was followed by...");
		printf("\n");
		printf("\n");
		print_console(console->successor);
	}
	else
	{
		printf("The Nintendo ");
		printf("\'%s\' ", console->name);
		printf("has no successor, yet!");
		printf("\n");
		printf("\n");
	}
}