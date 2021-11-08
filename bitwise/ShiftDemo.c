/* 
$ gcc ShiftDemo.c -o ShiftDemo
$ ./ShiftDemo 
Given:
 x =  255, i.e., 0X00FF
 y =    5, i.e., 0X0005
x >> y returns:      7, i.e., 0X0007
x << y returns:   8160, i.e., 0X1FE0
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int x, y, z;
 
  x = 255;
  y = 5;
  
  printf("Given:\n x = %4d, i.e., 0X%04X\n", x, x);
  printf(" y = %4d, i.e., 0X%04X\n", y, y);

  z = x >> y;

  printf("x >> y returns: %6d, i.e., 0X%04X\n", z, z);

  z = x << y;

  printf("x << y returns: %6d, i.e., 0X%04X\n", z, z);

  exit(0);
 }
