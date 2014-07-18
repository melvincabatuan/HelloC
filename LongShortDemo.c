/* 
$ gcc LongShortDemo.c -o LongShortDemo
$ ./LongShortDemo 
The short int of 0xFFFF is -1.
The unsigned int of 0xFFFF is 65535.
The long int of 0xFFFFFFFF is -1.
The unsigned long int of 0xFFFFFFFF is 4294967295.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 short int x;
 unsigned int y;
 long int s;
 unsigned long int t;
 
 x = 0xFFFF;
 y = 0xFFFFU;
 s = 0xFFFFFFFFl;
 t = 0xFFFFFFFFL;
 printf("The short int of 0xFFFF is %hd.\n", x);
 printf("The unsigned int of 0xFFFF is %u.\n", y);
 printf("The long int of 0xFFFFFFFF is %ld.\n", s);
 printf("The unsigned long int of 0xFFFFFFFF is %lu.\n", t);
 exit(0);
 }
