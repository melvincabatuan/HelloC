#include <stdio.h>

int main()
{
    int scores[5];
    // Get user input:    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 integer values: ");
        scanf("%d", &scores[i]);
    }
    // Display
    printf("You entered the following values: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("scores[%d] = %d \n", i, scores[i]);
    }
    return 0;
}