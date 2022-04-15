#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float side_a, side_b;
    puts("Enter the first side: ");
    scanf("%f", &side_a);
    puts("Enter the second side: ");
    scanf("%f", &side_b);
    // Compute and output:
    printf("The hypotenuse is equal to %.2f", sqrt(side_a * side_a + side_b * side_b));
    return 0;
}
