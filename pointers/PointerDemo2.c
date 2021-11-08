/* 
$ gcc PointerDemo.c -o PointerDemo
$ ./PointerDemo 
c: address = 0xbf964b1b, content = A
x: address = 0xbf964b20, content = 7
y: address = 0xbf964b28, content = 123.45
ptr_c: address = 0xbf964b1c, content = 0xbf964b1b
*ptr_c => A
ptr_x: address = 0xbf964b24, content = 0xbf964b20
*ptr_x => 7
ptr_y: address = 0xbf964b2c, content = 0xbf964b28
*ptr_y => 123.45
*/

#include <stdlib.h>
#include <stdio.h>

void main()
 {
   char c, *ptr_c;

    c = 'A';

    printf("c: address = %p, content = %c\n", &c, c);
 
    ptr_c = &c;
    printf("ptr_c: address = %p, content = %p\n", &ptr_c, ptr_c);
    printf("*ptr_c => %c\n", *ptr_c);

    *ptr_c = 'Z';
    printf("ptr_c: address = %p, content = %p\n", &ptr_c, ptr_c);
    printf("*ptr_c => %c\n", *ptr_c);

    printf("c: address = %p, content = %c\n", &c, c);
 
    exit(0);
 }
