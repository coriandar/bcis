#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[32];
	char last_name[32];
	char full_name[64];
	char full_name_rev[64];

	printf("First name? ");
	scanf("%s", &first_name);

	printf("Last name? ");
	scanf("%s", &last_name);

	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	printf("\nFull name: %s\n\n", full_name);

	strcpy(full_name_rev, last_name);
	strcat(full_name_rev, ", ");
	strcat(full_name_rev, first_name);
	printf("Last, First: %s\n\n", full_name_rev);

	return 0;
}