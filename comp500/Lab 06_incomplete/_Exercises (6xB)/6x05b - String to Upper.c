#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Please enter your name: ");
	char name[20];
	scanf("%19s", &name);

	int length = strlen(name);
	char name_upper[20];

	for (int index = 0; index <= length; index++)
	{
		if (97 <= name[index] && name[index] <= 122)
		{
			name_upper[index] = name[index] - 32;
		}
		else
		{
			name_upper[index] = name[index];
		}
	}

	printf("%s\n", name_upper);

	return 0;
}