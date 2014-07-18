/* 
$ g++ TrigoDemo.c -o TrigoDemo
$ ./TrigoDemo 
The sine of 60 is: 0.866025.
The cosine of 60 is: 0.500000.
The tangent of 60 is: 1.732051.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141593

 int main()
 {
 double x; 
 x = 60.0; 
 x *=  PI/ 180.0;  
 printf("The sine of 60 is: %f.\n", sin(x));
 printf("The cosine of 60 is: %f.\n", cos(x));
 printf("The tangent of 60 is: %f.\n", tan(x));
 exit(0);
 }
