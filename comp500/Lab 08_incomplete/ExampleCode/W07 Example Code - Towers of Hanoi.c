#include <stdio.h>
// The Towers of Hanoi is a mathematical puzzle. It consists
// of three poles, and a number of different sized discs. The
// discs can slide onto any pole. The puzzle starts with the
// discs in an ascending order stack on one of the poles,
// where the smallest disc is at the top. The objective of
// the puzzle is to move the entire stack to another pole,
// where the following rules are obeyed:
// 1) Only one disc can be moved at a time;
// 2) Each move consists of taking the top disc from one of
// the stacks and placing it on top of another stack;
// 3) No disc may be placed on top of a smaller disc.

// Assuming n-th disk is the bottom disk (count down)
void tower(int n, char srcPole, char destPole, char auxPole)
{
	// Base case...
	if (0 == n)
	{
		return;
	}
	
	// Move the first n-1 disks from the source pole to
	// auxiliary pole using destination as temporary pole:
	tower(n - 1, srcPole, auxPole, destPole);
	
	// Move the remaining disk from the source pole to
	// the destination pole:
	printf("Move the disk ");
	printf("%d from %c to %c\n", n, srcPole, destPole);
	
	// Move the n-1 disks from the auxiliary (now source)
	// pole to destination pole using source pole as
	// temporary (auxiliary) pole:
	tower(n - 1, auxPole, destPole, srcPole);
}

int main(void)
{
	tower(3, 'S', 'D', 'A');
	return 0;
}