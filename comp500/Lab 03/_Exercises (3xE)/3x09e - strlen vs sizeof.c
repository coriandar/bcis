#include <stdio.h>
#include <string.h>

int main(void)
{
	//improve by strlen the pneu.. word? use that to inform index.
	printf("Input and English word, no longer than...\n");
	printf("pneumonoultramicroscopicsilicovolcanokoniosis\n");
	printf("> ");
	
	char the_word[46] = "\0";
	scanf("%s", &the_word);

	int len = strlen(the_word);
	printf("strlen reports this input contains %d character(s).\n\n", len);

	printf("sizeof reports the_word is %zu bytes in size.\n", sizeof(the_word));

	return 0;
}