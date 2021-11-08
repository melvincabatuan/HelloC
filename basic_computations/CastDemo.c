/* 
$ gcc CastDemo.c -o CastDemo
$ ./CastDemo 
Given x = 7, y = 5
x / y produces: 1
(float)x / y produces: 1.40
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int x, y;
 x = 7;
 y = 5;
 printf("Given x = %d, y = %d\n", x, y);
 printf("x / y produces: %d\n", x / y);
 printf("(float)x / y produces: %0.2f\n", (float)x / y);
 exit(0);
 }
