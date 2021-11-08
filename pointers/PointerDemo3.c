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
   int x;
   int *ptr_1, *ptr_2, *ptr_3;
 
    x = 1234;
    printf("x: address = %p, content = %d\n", &x, x);

    ptr_1 = &x;
    printf("ptr_1: address = %p, content = %p\n", &ptr_1, ptr_1);
    printf("*ptr_1 => %d\n", *ptr_1);

    ptr_2 = &x;
    printf("ptr_2: address = %p, content = %p\n", &ptr_2, ptr_2);
    printf("*ptr_2 => %d\n", *ptr_2);

    ptr_3 = ptr_1;
    printf("ptr_3: address = %p, content = %p\n", &ptr_3, ptr_3);
    printf("*ptr_3 => %d\n", *ptr_3);
 
    exit(0);
 }
