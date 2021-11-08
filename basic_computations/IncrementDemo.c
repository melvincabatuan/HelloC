/* 
$ gcc IncrementDemo.c -o IncrementDemo
$ ./IncrementDemo 
Given w = 1, x = 1, y = 1, and z = 1,
++w gives: 2
x++ gives: 1
x: 2
--y gives: 0
z-- gives: 1
z: 0
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int w, x, y, z, result;
 
  w = x = y = z = 1;  

  printf("Given w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);
 
   result = ++w; // executed and the result of the pre-increment of w 
                 // is given to the integer variable result.
   printf("++w gives: %d\n", result);

   result = x++; // the result is obtained before the value of x is increased.
   printf("x++ gives: %d\n", result);
   printf("x: %d\n", x);
   result = --y;
   printf("--y gives: %d\n", result);
   result = z--;
   printf("z-- gives: %d\n", result);
   printf("z: %d\n", z);
   exit(0);
 }
