// no_math.c:11:18: note: include '<math.h>' or provide a declaration of 'pow'

#include <stdio.h>
int main()
{
    float num1, num2, num3, num4;
    float sumSquared;
    float average, sum;
    printf("Enter four numbers:");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    sum = num1 + num2 + num3 + num4;
    average = sum / 4;
    sumSquared = pow(num1, 2) + pow(num2, 2) + pow(num3, 2) + pow(num4, 2);
    printf("The sum is : %0.1f\n", sum);
    printf("The average is : %0.1f\n", average);
    printf("The sum of the squared numbers is: %0.1f\n", sumSquared);
}
