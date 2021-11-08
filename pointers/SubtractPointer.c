/* 
$ gcc SubtractPointer.c -o SubtractPointer
$ ./SubtractPointer 
The position of ptr_int1:  0x80484f9
The position of ptr_int2 = ptr_int1 + 5:  0x804850d
The subtraction of ptr_int2 - ptr_int1: 5
The position of ptr_int2 = ptr_int1 - 5:  0x80484e5
The subtraction of ptr_int2 - ptr_int1: -5

*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int *ptr_int1, *ptr_int2;
 
 printf("The position of ptr_int1:  %p\n", ptr_int1);
 ptr_int2 = ptr_int1 + 5;

 printf("The position of ptr_int2 = ptr_int1 + 5:  %p\n", ptr_int2);
 printf("The subtraction of ptr_int2 - ptr_int1: %d\n", ptr_int2 - ptr_int1);

 ptr_int2 = ptr_int1 - 5;
 printf("The position of ptr_int2 = ptr_int1 - 5:  %p\n", ptr_int2);
 printf("The subtraction of ptr_int2 - ptr_int1: %d\n", ptr_int2 - ptr_int1);
 exit(0);
 }
