#include <stdio.h>
#define SIZE 10
int main()
{
	int numbers[SIZE];
	int x;
	/* declare & initialize pointer */
	int *pn = numbers; 
	/* Fill array */
	for(x=0;x<SIZE;x++)
	{
		*pn=x+1;
		pn++;
	}
	/* Display array */
	for(x=0;x<SIZE;x++)
		printf("numbers[%d] = %d\n", x,numbers[x]);
	return(0);
}
