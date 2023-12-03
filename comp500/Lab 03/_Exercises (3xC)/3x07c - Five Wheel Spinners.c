#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));

	int wheel[7];

	wheel[0] = ((rand() % 7) + 1);
	wheel[1] = ((rand() % 7) + 1);
	wheel[2] = ((rand() % 7) + 1);
	wheel[3] = ((rand() % 7) + 1);
	wheel[4] = ((rand() % 7) + 1);

	printf("Wheel1 Wheel2 Wheel3 Wheel4 Wheel5\n");
	printf("+---+  +---+  +---+  +---+  +---+\n");
	printf("| %d |  | %d |  | %d |  | %d |  | %d |\n", wheel[0], wheel[1], wheel[2], wheel[3], wheel[4]);
	printf("+---+  +---+  +---+  +---+  +---+\n");

	return 0;
}