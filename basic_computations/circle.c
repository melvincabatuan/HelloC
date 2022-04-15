/******************************************************************************/
/* A program that accepts R as radius of a circle and displays its area (A)   */
/* and circumference (C)						*/ /******************************************************************************/

#include <stdio.h> // header declaration
#include <math.h>
#define pi 3.14159 // constant macro declaration main()

int main() // main program declaration
{
   float R, A, C;                                     // variable declaration
   printf("Input the radius: ");                      // output statement
   scanf("%f", &R);                                   // input statement
   A = pi * pow(R, 2);                                // assignment statement
   C = 2 * pi * R;                                    // assignment statement
   printf("\nCircumference = %f\n\nArea = %f", C, A); // output statement
   return 0;
}
