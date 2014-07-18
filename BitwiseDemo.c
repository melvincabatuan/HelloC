/* 
$ gcc BitwiseDemo.c -o BitwiseDemo
$ ./BitwiseDemo 
Given: 
 x = 4321, i.e., 0X10E1
 y = 5678, i.e., 0X162E
x & y returns:   4128, i.e., 0X1020
x | y returns:   5871, i.e., 0X16EF
x ^ y returns:   1743, i.e., 0X06CF
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int x, y, z;
 
  x = 4321;
  y = 5678;

  printf("Given: \n x = %u, i.e., 0X%04X\n", x, x);
  printf(" y = %u, i.e., 0X%04X\n", y, y);

  z = x & y;
  printf("x & y returns: %6u, i.e., 0X%04X\n", z, z);

  z = x | y;
  printf("x | y returns: %6u, i.e., 0X%04X\n", z, z);

  z = x ^ y;
  printf("x ^ y returns: %6u, i.e., 0X%04X\n", z, z);

  exit(0);
 }
