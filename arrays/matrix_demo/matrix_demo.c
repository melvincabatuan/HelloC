/*
This program stores roll numbers and marks obtained by a student side by side in matrix
Written by: MKC
Date written:
Last modified:
*/
#include <stdio.h>
#include "my_header.h"

int main()
{
    int records[4][2];

    // 1. Ask user-input: Roll no. and Mark
    printf("Enter: <Roll no.> <Mark>\n");
    for (int row = 0; row < MAX_ROWS; row++)
    {
        scanf("%d %d", &records[row][0], &records[row][1]);
    }
    // Display
    printf("\nThe records contain the ff.: \n");
    display_matrix(records);

    return 0;
}