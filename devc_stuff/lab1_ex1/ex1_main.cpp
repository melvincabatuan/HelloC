#include <stdio.h>
#include "ex1.h"

int main()
{
    int num_array[10];
    get_numbers(10, num_array);
    process_array(num_array, 10);
    return 0;
}