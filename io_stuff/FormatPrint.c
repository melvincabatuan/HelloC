/* 
$ gcc FormatPrint.c -o FormatPrint
$ ./FormatPrint 
12
12345
   12
00012
12345
12.345000
-536870912
12.34500
12.345000
12.35
 12.3
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int num1, num2;
 float num3;

 num1 = 12;
 num2 = 12345;
 num3 = 12.345;

 printf("%d\n", num1);
 printf("%d\n", num2);
 printf("%5d\n", num1);
 printf("%05d\n", num1);
 printf("%2d\n", num2);

 printf("%f\n", num3);
 printf("%d\n", num3);
 printf("%5.5f\n", num3);
 printf("%2f\n", num3);
 printf("%5.2f\n", num3);
 printf("%5.1f\n", num3);

 exit(0);
 }
