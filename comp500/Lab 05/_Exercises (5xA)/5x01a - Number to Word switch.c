//DESIGN:
//Take input as int.
//Compare to 0 - 9. If matches output the text version.
//Use switch.


#include <stdio.h>

int main(void)
{
	printf("Input a number between 0 and 9: ");
	int in_num = 0;
	scanf("%d", &in_num);

	switch (in_num)
	{
	case 0:
		printf("\nzero\n");
		break;
	case 1:
		printf("\none\n");
		break;
	case 2:
		printf("\ntwo\n");
		break;
	case 3:
		printf("\nthree\n");
		break;
	case 4:
		printf("\nfour\n");
		break;
	case 5:
		printf("\nfive\n");
		break;
	case 6:
		printf("\nsix\n");
		break;
	case 7:
		printf("\nseven\n");
		break;
	case 8:
		printf("\neight\n");
		break;
	case 9:
		printf("\nnine\n");
		break;
	default:
		printf("\nInvalid input!\n");
		break;
	}

	return 0;
}