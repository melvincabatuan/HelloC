#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    if (a > b)
        max = a;
    else
        max = b;
    printf("%d is bigger!\n", max);
    return 0;
}
