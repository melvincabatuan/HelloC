#include<stdio.h>
#include<stdlib.h>


int main()
{
    int contestants[] = {10, 20, 30};
	int *choice = contestants;

	printf("I'm going to pick contestant number [0] = %i\n", *choice);
	printf("I'm going to pick contestant number [1] = %i\n", *(choice+1));
	printf("I'm going to pick contestant number [2] = %i\n", *(choice+2));
	system("PAUSE");
	return 0;
}
