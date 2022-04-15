#include <stdio.h>

int main()
{
    int age;  // Declaration
    age = 23; // Assignment
    float weight = 60.32; // Declaration and assignment
    char gender = 'M';
    char name[] = "Melvin Cabatuan";

    printf("age = %d\n", age); // output age
    printf("weight = %f\n", weight); // output weight
    printf("gender = %c\n", gender);

    printf("You are %s, and your age is %d.", name, age);
    return 0;
}