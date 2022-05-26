#include <stdio.h>

// This function gets the maximum value of a sequence
float find_max(float sequence[], int length)
{
    float max = sequence[0];
    for (int i = 1; i < length; i++)
    {
        if(max < sequence[i])
            max = sequence[i];
    }
    return max;
}

void display_array(float sequence[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("\n numbers[%d] = %0.2f", i, sequence[i]);
    }
}