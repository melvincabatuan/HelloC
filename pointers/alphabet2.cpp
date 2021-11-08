#include <stdio.h>
int main()
{
	char alphabet[26];
	char *pa = alphabet; /* declare & initialize pointer */
	/* fill the array */
	for(int x=0;x<26;x++)
	{
		*pa=x+'A';
		pa++;
	}
	pa = alphabet; /* re-initialize pointer */
	/* output the array */
	for(int x=0;x<26;x++)
	{
		putchar(*pa);
		pa++;
	}
	putchar('\n');
	return(0);
}
