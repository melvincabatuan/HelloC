/* 
$ gcc SizeOfDemo.c -o SizeOfDemo
$ ./SizeOfDemo 
The size of char is: 1-byte
The size of ch is: 1-byte
The size of int is: 4-byte
The size of int_num is: 4-byte
The size of long int is: 4-byte
The size of lint_num is: 4-byte
The size of float is: 4-byte
The size of flt_num is: 4-byte
The size of double is: 8-byte
The size of dbl_num is: 8-byte
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 char ch = ' ';
 int int_num = 0;
 long int lint_num = 0l;
 float flt_num = 0.0f;
 double dbl_num = 0.0;
 
 printf("The size of char is: %d-byte\n", sizeof(char));
 printf("The size of ch is: %d-byte\n", sizeof ch );
 printf("The size of int is: %d-byte\n", sizeof(int));
 printf("The size of int_num is: %d-byte\n", sizeof int_num);
 printf("The size of long int is: %d-byte\n", sizeof(long int));
 printf("The size of lint_num is: %d-byte\n", sizeof lint_num);
 printf("The size of float is: %d-byte\n", sizeof(float));
 printf("The size of flt_num is: %d-byte\n", sizeof flt_num);
 printf("The size of double is: %d-byte\n", sizeof(double));
 printf("The size of dbl_num is: %d-byte\n", sizeof dbl_num);
 exit(0);
 }
