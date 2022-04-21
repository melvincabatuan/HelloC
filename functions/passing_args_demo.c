/*/*
This program demonstrates passing by value in a function.
Written by: MKC
Date written:
Last modified:
*/
#include <stdio.h>

void display_number(int x)
{
    printf("Your number input is %d.\n", x);
}

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    display_number(num);
    return 0;
}