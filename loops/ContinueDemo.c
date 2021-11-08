/* 
$ gcc ContinueDemo.c -o ContinueDemo
$ ./ContinueDemo 
The sum of odd numbers until 10 is 25.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int i, sum;

 sum = 0;

 for (i=1; i<=10; i++){
    if (i%2 == 0)
       continue;
    sum += i;
 }
 printf("The sum of odd numbers until 10 is %d.\n", sum);
 exit(0);
 }
