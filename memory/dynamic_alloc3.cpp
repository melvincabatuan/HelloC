#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned char *junk;
	/* allocate memory */
//	junk = (unsigned char *)malloc(64);
	junk = (unsigned char *)calloc(64, sizeof(char));
	if( junk==NULL )
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	/* output the buffer */
	for(int x=0;x<64;x++)
	{
		printf("%02X ",*(junk+x));
		if( (x+1) % 8 == 0 )
			putchar('\n');
	}
	free(junk);
	return(0);
}
