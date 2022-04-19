#include <stdio.h>

int main(){
    // Declare variables
    float grade, m1,m2,m3,m4;
    // Input with prompt
    printf("Enter 4 scores: \n");
    scanf("%f %f %f %f", &m1,&m2,&m3,&m4);
    // Compute the average
    grade = (m1+m2+m3+m4)/4.0f;
    // Decision
    if (grade < 70)
        printf("Fail! Average = %0.2f", grade);
    else
        printf("Pass! Average = %0.2f", grade);
    return 0;
}