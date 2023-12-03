#include <stdio.h>

struct Chunk
{
	char member1;
	char member4;
	char member5;
	char member8;
	int member3;
	int member7;
	short member2;
	short member6;
};

int main(void)
{
	printf("sizeof(Chunk) is %d ", sizeof(struct Chunk));
	printf("bytes.\n");

	return 0;
}