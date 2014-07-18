/* 
$ gcc ScopeDemo.c -o ScopeDemo
$ ./ScopeDemo 
Within the program scope: h=100
Within the outer block: i=32
Within the inner block:
i= 0, j=10
i= 1, j= 9
i= 2, j= 8
i= 3, j= 7
i= 4, j= 6
i= 5, j= 5
i= 6, j= 4
i= 7, j= 3
i= 8, j= 2
i= 9, j= 1
i=10, j= 0
h=100
Within the program scope: h=100
Within the outer block: i = 32
*/

#include <stdlib.h>
#include <stdio.h>

int h = 100; /* program scope */

/*
Global variables increases your program's complexity, which in turn 
makes your program hard to maintain or debug.

Generally, it's not recommended that you declare and use global variables.
*/

 void main()
 {
 int i = 32; /* block scope 1*/
 
 printf("Within the program scope: h=%d\n", h);
 printf("Within the outer block: i=%d\n", i);
 
 
 { /* the beginning of the inner block */
 int i, j; /* block scope 2, int i hides the outer int i*/
 
 printf("Within the inner block:\n");
 for (i=0, j=10; i<=10; i++, j--)
    printf("i=%2d, j=%2d\n", i, j);
  printf("h=%d\n", h);
 } /* the end of the inner block */

 printf("Within the program scope: h=%d\n", h);
 printf("Within the outer block: i = %d\n", i);
 //printf("Within the outer block: j = %d\n", j); //ERROR
// ‘j’ undeclared (first use in this function)
 exit(0);
 }
