/* 
$ gcc FormatPrint2.c -o FormatPrint2
$ ./FormatPrint2
       1 1       
      12 12      
     123 123     
    1234 1234    
   12345 12345 
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int num1, num2, num3, num4, num5;
 
  num1 = 1;
  num2 = 12;
  num3 = 123;
  num4 = 1234;
  num5 = 12345;
  printf("%8d %-8d\n", num1, num1);
  printf("%8d %-8d\n", num2, num2);
  printf("%8d %-8d\n", num3, num3);
  printf("%8d %-8d\n", num4, num4);
  printf("%8d %-8d\n", num5, num5);

 exit(0);
 }
