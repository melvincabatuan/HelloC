#include <stdio.h>

int main()
{
        // Declaration and assignment at the same time
        int numbers[] = {10, 20, 30, 40, 50};
        // OR:
        // 1. Declaration
        // int numbers[4];
        // 2. Access or assign values
        // numbers[0] = 10;
        // numbers[1] = 20;
        // numbers[2] = 30;
        // numbers[3] = 40;
        // Display
        printf("\nThe first number is %d.", numbers[0]);
    printf("\nThe second number is %d.", numbers[1]);
    printf("\nThe third number is %d.", numbers[2]);
    printf("\nThe fourth number is %d.", numbers[3]);
    printf("\nThe fifth number is %d.", numbers[4]);
    return 0;
}