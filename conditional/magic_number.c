#include <stdio.h>

int main()
{
    int number;
    printf("Enter a magic number: ");
    scanf("%d", &number);

    if (number == 143)
        printf("I love you!\n");
    else
        printf("Sorry, better luck next time!\n");
    return 0;
}