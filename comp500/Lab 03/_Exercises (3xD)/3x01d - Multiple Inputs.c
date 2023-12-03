#include <stdio.h>

int main(void)
{
	char channel[3];
	int value[3];

	printf("Input colour:\n");
	printf("> ");

	int debug = scanf("%c%d%c%d%c%d", &channel[0], &value[0], &channel[1], &value[1], &channel[2], &value[2]);
	printf("\nSuccessfully parsed %d out of 6 items.\n\n", debug);

	printf("Colour channels detected: ( %c, %c, %c )\n\n", channel[0], channel[1], channel[2]);
	printf("%c channel's value is %d (0x%x)\n", channel[0], value[0], value[0]);
	printf("%c channel's value is %d (0x%x)\n", channel[1], value[1], value[1]);
	printf("%c channel's value is %d (0x%x)\n\n", channel[2], value[2], value[2]);

	float value_f[3];
	value_f[0] = value[0] / 255.0f;
	value_f[1] = value[1] / 255.0f;
	value_f[2] = value[2] / 255.0f;

	float percent[3];
	percent[0] = value_f[0] * 100.0f;
	percent[1] = value_f[1] * 100.0f;
	percent[2] = value_f[2] * 100.0f;

	printf("Notation:          | Triplet ( %c, %c, %c ):\n", channel[0], channel[1], channel[2]);
	printf("-------------------+----------------------\n");
	printf("Arithmetic         | ( %.2f, %.2f, %.2f )\n", value_f[0], value_f[1], value_f[2]);
	printf("Percentage         | ( %.0f%%, %.0f%%, %.0f%% )\n", percent[0], percent[1], percent[2]);
	printf("8-bit channels     | ( %d, %d, %d )\n", value[0], value[1], value[2]);
	printf("8-bit hex channels | #%X%X%X\n", value[0], value[1], value[2]);
	
	return 0;
}