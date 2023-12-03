#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];
	int length = 0;

	printf("What is your first name? ");
	scanf("%s", &name);

	length = strlen(name);
	printf("%s contains %d characters", name, length);



	return 0;
}