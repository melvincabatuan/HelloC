#include <stdio.h> // needed by printf

#define MAX_SIZE 5

int square(int a)
{
    return a * a;
}

void display_array(int numbers[], int length){
    for (int i = 0; i < length; i++)
    {
        printf("\n numbers[%d] = %d", i, numbers[i]);
    }
    
}