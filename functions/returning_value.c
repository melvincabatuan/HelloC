/*/*
This program demonstrates returning value from a function.
Written by: MKC
Date written:
Last modified:
*/
#include <stdio.h>

float php2usd(float php)
{
    return php/52.4319;
}

int main()
{
    int pera;
    printf("Enter you money (PHP): \n");
    scanf("%d", &pera);
    printf("Your money in USD is equal to %f.\n", php2usd(pera));
    return 0;
}