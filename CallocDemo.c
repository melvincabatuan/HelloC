/* 
$ gcc CallocDemo.c -o CallocDemo
$ ./CallocDemo 
ptr1[0] = 0.000000, ptr2[0] = 0.000000
ptr1[1] = 0.000000, ptr2[1] = 0.000000
ptr1[2] = 0.000000, ptr2[2] = 0.000000
ptr1[3] = 0.000000, ptr2[3] = 0.000000
ptr1[4] = 0.000000, ptr2[4] = 0.000000
*/

// Note: The deffierence between malloc() and calloc() are that the latter takes two arguments 
// and that the memory space allocated by calloc() is always initialized to 0.

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 double *ptr1, *ptr2;
 int i, n;
 int termination = 1;
 
 n = 5;

 ptr1 = calloc(n, sizeof(double));
 ptr2 = malloc(n * sizeof(double));

 if (ptr1 == NULL)
    printf("malloc() failed.\n");
 else if (ptr2 == NULL)
    printf("calloc() failed.\n");
 else {
    for (i=0; i<n; i++)
       printf("ptr1[%d] = %f, ptr2[%d] = %f\n", i, *(ptr1 + i), i, *(ptr2 + i));
    free(ptr1);
    free(ptr2);
    termination = 0;
 }
 exit(termination);
 }
