/* 
$ gcc NestedLoopDemo.c -o NestedLoopDemo
$ ./NestedLoopDemo 
The start of iteration 1 of the outer loop.
 Iteration 1 of the inner loop.
 Iteration 2 of the inner loop.
 Iteration 3 of the inner loop.
 Iteration 4 of the inner loop.
 Iteration 5 of the inner loop.
The end of iteration 1 of the outer loop.
The start of iteration 2 of the outer loop.
 Iteration 1 of the inner loop.
 Iteration 2 of the inner loop.
 Iteration 3 of the inner loop.
 Iteration 4 of the inner loop.
 Iteration 5 of the inner loop.
The end of iteration 2 of the outer loop.
The start of iteration 3 of the outer loop.
 Iteration 1 of the inner loop.
 Iteration 2 of the inner loop.
 Iteration 3 of the inner loop.
 Iteration 4 of the inner loop.
 Iteration 5 of the inner loop.
The end of iteration 3 of the outer loop.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int i, j;
 
 for (i=1; i<=3; i++) { /* outer loop */
    printf("The start of iteration %d of the outer loop.\n", i);
    for (j=1; j<=5; j++) /* inner loop */
       printf(" Iteration %d of the inner loop.\n", j);
 printf("The end of iteration %d of the outer loop.\n", i);
 }
 exit(0);
 }
