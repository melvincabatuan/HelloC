#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *age;
	/* allocate memory */
	age = (int *)malloc(sizeof(int)*1);
	if(age == NULL)
	{
	puts("Unable to allocate memory");
	exit(1);
	}
	/* use the memory */
	printf("How old are you? ");
	scanf("%d",age);
	printf("You are %d years old.\n",*age);
	free(age);
	return(0);
}
