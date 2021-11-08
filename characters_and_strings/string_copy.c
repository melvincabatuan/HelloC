#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 81

void strcopy(char[], char[]); /* function prototype */

int main()
{
	char message[BUFFER_SIZE];	/* enough storage for a complete line */
	char new_mess[BUFFER_SIZE]; /* enough storage for a copy of message */
	int i;

	printf("Enter a sentence: ");
	fgets(message, BUFFER_SIZE, stdin);

	strcopy(new_mess, message); /* pass two array addresses */
	puts(new_mess);
	system("pause");
}

void strcopy(char string1[], char string2[]) /* copy string2 to stringl */
{
	int i = 0; /* i will be used as a subscript */

	while (string2[i] != '\0') /* check for the end-of-string */
	{
		string1[i] = string2[i]; /* copy the element to stringl */
		++i;
	}
	string1[i] = '\0';
	return;
}
