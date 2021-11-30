#include <stdio.h>
#define SIZE 10

int main()
{
	int numbers[SIZE];
	int x;

    // printf("0X%p\n", numbers);

	/* declare & initialize pointer */
	int *pn = numbers; // my usual practice 
    // printf("0X%p\n", pn);

	// /* Fill array */
	for(x=0;x<SIZE;x++)
	{
		*pn=10*(x+1);
		pn++;
	}
    //printf("%d", *pn); // ??? 53 ?? No longer allocated to this program

	// /* Display array */
	for(x=0;x<SIZE;x++)
		printf("numbers[%d] = %d\n", x,numbers[x]);

    pn = numbers;

    printf("%d\n",numbers[9]);
    printf("%d\n", *pn+9);
    printf("%d\n", *(pn+9));
	return(0);
}
