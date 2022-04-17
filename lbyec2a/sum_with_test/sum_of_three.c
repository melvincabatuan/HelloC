#include <stdio.h>

int main()
{
    // Declare the variables to identify the locations of data
    int first_num, second_num, third_num, sum;

    // Prompt the user for input
    printf("Enter three numbers: \n");

    // Read the user input - Note: '&' means "address of"
    scanf("%d %d %d", &first_num, &second_num, &third_num);

    // Echo the input numbers (Useful for debugging)
    printf("Your inputs are: %d %d %d", first_num, second_num, third_num);

    // Compute the sum
    sum = first_num + second_num + third_num;

    // Output the result
    printf("\nThe sum is %d.\n", sum);

    return 0;
}