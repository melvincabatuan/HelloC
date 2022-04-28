#include <stdio.h>

int main()
{
    int num;
    while (1) // 1 is interpreted as TRUE
    {
        printf("Please input a positive number: ");
        scanf("%d", &num);
        if (num > 0)
            break;
    }
    // do
    // {
    //     printf("Please input a positive number: ");
    //     scanf("%d", &num);
    // } while (num <= 0);
    printf("Congrats! Your number is now positive!\n");
    return 0;
}