#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *input;
	int len;
	/* allocate storage */
	input = (char *)malloc(sizeof(char)*1024);
	if(input==NULL)
	{
		puts("Unable to allocate buffer! Oh no!");
		exit(1);
	}
	/* gather input */
	puts("Type something long and boring:");
	fgets(input,1023,stdin);
	/* resize the buffer */
	len = strlen(input);
	input = (char *)realloc(input,sizeof(char)*(len+1));
	if( input==NULL )
	{
		puts("Unable to reallocate buffer!");
		exit(1);
	}
	puts("Memory reallocated.");
	/* output results */
	puts("You wrote:");
	printf("%s",input);
	free(input);
	return(0);
}
