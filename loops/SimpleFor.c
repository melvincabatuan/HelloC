/* 
$ gcc SimpleFor.c -o SimpleFor
$ ./SimpleFor 
0 + 12 = 12
1 + 11 = 12
2 + 10 = 12
3 + 9 = 12
4 + 8 = 12
5 + 7 = 12
6 + 6 = 12
7 + 5 = 12
8 + 4 = 12
9 + 3 = 12
10 + 2 = 12
11 + 1 = 12
*/

#include <stdlib.h>
#include <stdio.h>

void main()
 {
 int i, j;
 
 for (i=0, j=12; i<12; i++, j--)
   printf("%d + %d = %d\n", i, j, i+j);
 exit(0);
 }
