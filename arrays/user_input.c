#include <stdio.h>

int main()
{
    int scores[5];
    // Get user input:
    // printf("Enter 5 integer values: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter score[%d] = ", i);
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