#include <stdio.h> // Built-in header needed by printf

#define MAXSIZE 10

void greet()
{
    printf("Hello, World!");
    printf("\nHow are you!");
    return;
}

int sum_of_two(int a, int b)
{
    return a + b;
}

int array_sum(int numbers[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum;
}