/* 
$ gcc SimpleDoWhile.c -o SimpleDoWhile
$ ./SimpleDoWhile 
The numeric value of A is 65.
The numeric value of B is 66.
The numeric value of C is 67.
The numeric value of D is 68.
The numeric value of E is 69.
The numeric value of F is 70.
The numeric value of G is 71.
The numeric value of H is 72.
The numeric value of I is 73.
The numeric value of J is 74.
The numeric value of K is 75.
The numeric value of L is 76.
The numeric value of M is 77.
The numeric value of N is 78.
The numeric value of O is 79.
The numeric value of P is 80.
The numeric value of Q is 81.
The numeric value of R is 82.
The numeric value of S is 83.
The numeric value of T is 84.
The numeric value of U is 85.
The numeric value of V is 86.
The numeric value of W is 87.
The numeric value of X is 88.
The numeric value of Y is 89.
The numeric value of Z is 90.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int i;
 
 i = 65;
 
 do {
    printf("The numeric value of %c is %d.\n", i, i);
    i++;
 } while (i<91);
 exit(0);
 }
