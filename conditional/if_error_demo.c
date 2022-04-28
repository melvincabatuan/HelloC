#include <stdio.h>

int main()
{
    int age; 
    printf("Enter your age: \n"); 
    scanf("%d", &age);  // this reads the user input
    if (age >= 18)
        /*Empty code is run when true*/
        ; // ';' causes the error
        printf("You can drink beer!");
    return 0;
}