#include <stdio.h>

struct Fragment
{
	char c1;
	int i1;
	char c2;
	int i2;
	char c3;
};

struct Blob
{
	char c1;
	struct Fragment p1;
	char c2;
	struct Fragment p2;
	short s1;
};

struct Optimised_Fragment
{
	char c1;
	char c2;
	char c3;
	int i1;
	int i2;
};

struct Optimised_Blob
{
	struct Optimised_Fragment p1;
	struct Optimised_Fragment p2;
	char c1;
	char c2;
	short s1;
};

int main(void)
{
	printf("Fragment is %d bytes in size.\n", sizeof(struct Fragment));
	printf("Blob is %d bytes in size.\n\n", sizeof(struct Blob));

	printf("Optimised_Fragment is %d bytes in size.\n", sizeof(struct Optimised_Fragment));
	printf("Optimised_Blob is %d bytes in size.\n", sizeof(struct Optimised_Blob));

	return 0;
}