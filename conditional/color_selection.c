#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter: \n");
    scanf("%c", &letter);

    if ((letter == 'B') || (letter == 'b'))
        printf("Blue\n");
    else if ((letter == 'R') || (letter == 'r'))
        printf("Red\n");
    else if ((letter == 'G') || (letter == 'g'))
        printf("Green\n");
    else if ((letter == 'Y') || (letter == 'y'))
        printf("Yellow\n");
    else
        printf("Unknown Color\n");
    return 0;
}