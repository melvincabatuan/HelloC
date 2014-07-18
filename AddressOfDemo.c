/* 
$ gcc AddressOfDemo.c -o AddressOfDemo
$ ./AddressOfDemo 
c: address = 0xbf810ed7, content = 
x: address = 0xbf810ed8, content = 134513961
y: address = 0xbf810edc, content = -0.00
c: address = 0xbf810ed7, content = A
x: address = 0xbf810ed8, content = 7
y: address = 0xbf810edc, content = 123.45
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 char c;
 int x;
 float y;

 printf("c: address = %p, content = %c\n", &c, c);
 printf("x: address = %p, content = %d\n", &x, x);
 printf("y: address = %p, content = %5.2f\n", &y, y);
 c = 'A';
 x = 7;
 y = 123.45;
 printf("c: address = %p, content = %c\n", &c, c);
 printf("x: address = %p, content = %d\n", &x, x);
 printf("y: address = %p, content = %5.2f\n", &y, y);
 exit(0);
 }
