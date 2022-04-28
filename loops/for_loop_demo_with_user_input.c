/*/*
This program demonstrates for-loop by printing 1,2,3,4,5.
Written by: MKC
Date written:
Last modified:
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // 1. Initialization
    // 2. Terminating Condition, e.g. (i <= 5)
    // 3. Increment
    for (int i = num; i <= 5; i = i + 1)
    {
        printf("%d\n", i);
    }
    return 0;
}