#include <stdio.h>

int main()
{
    int num, rem, sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of digits is %d.", sum);
    return 0;
}