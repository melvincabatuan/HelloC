/* 
$ gcc IntegerDivisionDemo.c -o IntegerDivisionDemo
$ ./IntegerDivisionDemo 
The integer division of 23/10 is: 2
The floating-point division of 23/10 is: 2.000000
The integer division of 23.0/10 is: 2
The floating-point division of 23.0/10 is: 2.300000
The integer division of 23/10.0 is: 2
The floating-point division of 23/10.0 is: 2.300000
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int int_num1, int_num2, int_num3; /* Declare integer variables */

 float flt_num1, flt_num2, flt_num3; /* Declare floating-point variables */

 int_num1 = 23 / 10; /* Both divisor and dividend are integers */
 flt_num1 = 23 / 10;
 int_num2 = 23.0 / 10; /* The divisor is an integer */
 flt_num2 = 23.0 / 10;
 int_num3 = 23 / 10.0; /* The dividend is an integer */
 flt_num3 = 23 / 10.0;

 printf("The integer division of 23/10 is: %d\n", int_num1);
 printf("The floating-point division of 23/10 is: %f\n", flt_num1);
 printf("The integer division of 23.0/10 is: %d\n", int_num2);
 printf("The floating-point division of 23.0/10 is: %f\n", flt_num2);
 printf("The integer division of 23/10.0 is: %d\n", int_num3);
 printf("The floating-point division of 23/10.0 is: %f\n", flt_num3);
 
 exit(0);
 }
