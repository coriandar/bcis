//Write a program that helps a traveller decide 
//on their December holiday destination depending on
//their preferred destination temperature 
//and preferred New Zealand island.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("What is your preferred destination temperature\? ");
	float temp = 0.0f;
	scanf("%f", &temp);

	printf("Which island do you prefer, North or South (n/s)\? ");
	char island = '\0';
	scanf(" %c", &island);

	char destination[15] = "\0";

	if (temp < 20.0f)
	{
		if (island == 'n')
		{
			strcpy(destination, "Wellington");
		}
		else if (island == 's')
		{
			strcpy(destination, "Dunedin");
		}
	}

	if (temp >= 20.0f)
	{
		if (island == 'n')
		{
			strcpy(destination, "Auckland");
		}
		else if (island == 's')
		{
			strcpy(destination, "Christchurch");
		}
	}

	printf("\nRecommended holiday destination: %s\n", destination);

	return 0;
}