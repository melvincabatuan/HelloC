/* 
$ gcc Relational.c -o Relational
$ ./Relational 
Given x = 7, y = 25, and z = 24.46,
x >= y produces: 0
x <= y produces: 1
x == y produces: 0
z >= y produces: 0
z <= y produces: 1
z == 24.46 produces: 1
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int x, y;
 double z;
 
  x = 7;
  y = 25;
  z = 24.46;

 printf("Given x = %d, y = %d, and z = %.2f,\n", x, y, z);
 printf("x >= y produces: %d\n", x >= y);
 printf("x <= y produces: %d\n", x <= y);
 printf("x == y produces: %d\n", x == y);

 printf("z >= y produces: %d\n", z >= y);
 printf("z <= y produces: %d\n", z <= y);
 printf("z == 24.46 produces: %d\n", z == 24.46);
 exit(0);
 }
