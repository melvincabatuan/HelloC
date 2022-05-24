#include "my_header.h"

int main(){
    // Declare
    int numbers[MAX_SIZE], result[MAX_SIZE];
    // Ask user input
    printf("Input 5 numbers: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
       scanf("%d", &numbers[i]);
    }
    // Echo the values
    display_array(numbers, MAX_SIZE);

        // Perform simple compute
        for (int i = 0; i < MAX_SIZE; i++)
    {
        result[i] = square(numbers[i]);
    }

    // Note: DRY
    printf("\n The results are: \n");
    display_array(result, MAX_SIZE);

    return 0;
}