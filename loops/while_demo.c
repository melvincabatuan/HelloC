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
    while (i <= 5)
    {
        printf("%d\n", 2 * i);
        i += 1; // i = i + 1
    }
    return 0;
}