#include <stdio.h>

int main()
{
    // Declare variables
    float grade;
    // Input with prompt
    printf("Enter the raw grade: \n");
    scanf("%f", &grade);

    // Decision
    if (grade >= 95)
        printf("4.0");
    else if (grade >= 90)
        printf("3.5");
    else if (grade >= 85)
        printf("3.0");
    else if(grade >= 80)
        printf("2.5");
    else if(grade >= 75)
        printf("2.0");
    else if (grade >= 70)
        printf("1.7");
    else if (grade >= 65)
        printf("1.0");
    else
        printf("0.0");
    return 0;
}