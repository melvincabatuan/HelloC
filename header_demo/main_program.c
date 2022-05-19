// #include <stdio.h> // possible to exclude due to header inclusion
#include "my_header.h" // Custom header

int main()
{
    greet();
    printf("\n 3 + 5 = %d", sum_of_two(3,5));

    // array sum sample
    int scores[] = {20, 30, 40 ,50 , 60};
    printf("\nThe sum is %d." , array_sum(scores, 5));
    return 0;
}