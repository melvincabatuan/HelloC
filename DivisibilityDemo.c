/* 
$ gcc HelloDon.c -o HelloDon 
$ ./HelloDon 
Hello Don, Hello peg!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int i;
 
 printf("Integers that can be divided by both 7 and 3\n");
 printf("(within the range of 0 to 100):\n");
 for (i=0; i<=100; i++){
    if ((i%7 == 0) && (i%3 == 0))
       printf(" %d\n", i);
 }
 exit(0);
 }
