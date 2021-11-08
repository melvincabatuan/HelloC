/* 
$ gcc MultiArrayPassFunction.c -o MultiArrayPassFunction
$ ./MultiArrayPassFunction 
The sum returned by DataAdd1(): 30
The sum returned by DataAdd2(): 30
*/

#include <stdlib.h>
#include <stdio.h>


int DataAdd1(int list[][5], int rows, int cols)
{
 int i, j;
 int sum = 0;
 
 for (i=0; i<rows; i++)
   for (j=0; j<cols; j++)
      sum += list[i][j];
 return sum;
}


int DataAdd2(int *list, int rows, int cols)
{
 int i, j;
 int sum = 0;
 
 for (i=0; i<rows; i++)
   for (j=0; j<cols; j++)
       sum += *(list + i*cols + j);
  return sum;
}


 void main()
 {
 int list[2][5] = {1, 2, 3, 4, 5,
                   5, 4, 3, 2, 1};
 int *ptr_int;
 
 printf("The sum returned by DataAdd1(): %d\n",
 DataAdd1(list, 2, 5));
 ptr_int = &list[0][0];
 printf("The sum returned by DataAdd2(): %d\n",
 DataAdd2(ptr_int, 2, 5));
 exit(0);
 }
