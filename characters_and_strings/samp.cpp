// Function to count the number of characters in a string
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main (void)
{
int stringLength[]={'m'};

scanf("%s", &stringLength);
int count = 0;
while ( stringLength != '\0' )
++count;

printf ("%i %i %i\n", stringLength);

 system("pause");
 return 0;
 }
