#include <stdio.h>

#define SQUARE(x)((x) *(x))
#define MAX(a, b)((a) > (b)) ? (a) : (b)
#define STRINGIT(x) printf("%s=%s\n", #x, x)
#define PRINT(number) printf("%d\n", number)
#define PRINTTWONEWLINES printf("\n\n")

int main(void)
{
	int result;
	int biggest;
	int j = 5;
	int k = 7;
	
	char fruit[] = "Banana";
	
	biggest = MAX(j, k);
	result = SQUARE(k);
	PRINT(j);
	PRINTTWONEWLINES;
	PRINT(k);
	PRINTTWONEWLINES;
	PRINT(biggest);
	PRINTTWONEWLINES;
	PRINT(result);
	PRINTTWONEWLINES;
	STRINGIT(fruit);
	
	return 0;
}