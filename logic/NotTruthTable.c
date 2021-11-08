/* 
$ gcc NotTruthTable.c -o NotTruthTable
$ ./NotTruthTable 
   p   Output 
 FALSE 	 1 
 TRUE 	 0 
*/

#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

 void main()
 {
 printf ("   p   Output \n");
 printf (" FALSE \t %d \n", !FALSE);
 printf (" TRUE \t %d \n", !TRUE);
 exit(0);
 }
