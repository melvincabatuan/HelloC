/*
$ gcc ConditionalDemo.c -o ConditionalDemo
$ ./ConditionalDemo
The int data type has 4 bytes.
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int x;
    x = sizeof(int);
    // printf("x = %d\n", x);
    printf("%s\n", (x == 4) ? "The int data type has 4 bytes." : "int doesn't have 4 bytes.");
    exit(0);
}
