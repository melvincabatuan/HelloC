/*
This program demonstrates the use of a while loop
by printing numbers 1 to 5
Written by: MKC
Date written:
Last modified:
*/

#include <stdio.h>

int main()
{
    // 1. Initialization
    int i = 1;

    // 2. Terminating Condition, e.g. (i <= 5)
    while (i <= 5)
    {
        printf("%d\n", i);
        // 3. Increment
        i = i + 1; // pwede din i++ or i += 1
    }
    return 0;
}