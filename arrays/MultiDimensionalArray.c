/* 
$ gcc MultiDimensionalArray.c -o MultiDimensionalArray
$ ./MultiDimensionalArray 

     1     2     3     4     5
    10    20    30    40    50
   100   200   300   400   500
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 //int two_dim[3][5] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200, 300, 400, 500};
 int two_dim[][5] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200, 300, 400, 500};
 int i, j;
 
 for (i=0; i<3; i++){
    printf("\n");
    for (j=0; j<5; j++)
       printf("%6d", two_dim[i][j]);
 }
 printf("\n");
 exit(0);
}
