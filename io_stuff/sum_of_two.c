#include <stdio.h>

int main(){
    // Declare
    float a, b, sum;
    // Prompt the user 
    printf("Enter two numbers: \n");
    // Read and store
    scanf("%f %f", &a, &b);
    // Compute
    sum = a + b;
    // Display
    printf("%0.2f + %0.2f = %0.2f", a, b, sum);
    return 0;
}