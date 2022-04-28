// using logical operators

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("\nEnter age: ");
    scanf("%d", &age);
    if ((age >= 1) && (age <= 100))
    {
        if (age >= 18)
            printf("qualified to vote\n");
        else
            printf("too young!");
    }
    else
        printf("out of range!\n");
    return 0;
}