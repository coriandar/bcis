//ERROR
//Stack around activity[] was corrupted.

//FIX
//Increase array size.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Is the temperature warm or cold (w/c)\? ");
	char temp = '\0';
	scanf(" %c", &temp);

	printf("Is it dry or humid (d/h)\? ");
	char hum = '\0';
	scanf(" %c", &hum);

	char activity[100] = "\0";
	if (temp == 'w' && hum == 'd')
	{
		strcpy(activity, "You should play tennis.");
	}
	else if (temp == 'w' && hum == 'h')
	{
		strcpy(activity, "You should go swimming.");
	}
	else if (temp == 'c' && hum == 'd')
	{
		strcpy(activity, "You should study Programming 1.");
	}
	else if (temp == 'c' && hum == 'h')
	{
		strcpy(activity, "You should read a book.");
	}
	printf("\n%s\n", activity);

	return 0;
}