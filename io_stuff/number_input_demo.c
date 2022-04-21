/*
This program demonstrates scanf usage for a single integer.
Written by: MKC
Date written:
Last modified:
*/

#include <stdio.h>

int main()
{
    // 1. Declare a variable
    int num;
    // 2. Prompt the user for input
    printf("Enter a number: \n");
    // 3. Read the input and store to memory
    scanf("%d", &num); // & - means "address of"
    // 4. Display the input number
    printf("The number that you input is: %d\n", num);
    return 0;
}