/*
This program demonstrates scanf usage for a single integer.
Written by: MKC
Date written:
Last modified:
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The number that you input is: %d\n", num);
    return 0;
}