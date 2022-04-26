/*/*
This program demonstrates the use of a while loop
by printing even numbers
Written by: MKC
Date written:
Last modified:
*/

#include <stdio.h>

int main()
{
    int i = 0;
    do // Execute first before check (assured with the first execution)
    {
        printf("%d\n", 2 * i);
        i += 1; // i = i + 1
    } while (i <= 5);
    return 0;
}