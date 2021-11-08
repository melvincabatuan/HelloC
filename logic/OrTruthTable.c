/* 
$ gcc OrTruthTable.c -o OrTruthTable
$ ./OrTruthTable 
p 	 q 	 Output 
FALSE 	 FALSE 	 0 
FALSE 	 TRUE 	 1 
TRUE 	 FALSE 	 1 
TRUE 	 TRUE 	 1
*/

#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

 void main()
 {
 printf ("p \t q \t Output \n");
 printf ("FALSE \t FALSE \t %d \n", FALSE || FALSE);
 printf ("FALSE \t TRUE \t %d \n", FALSE || TRUE);
 printf ("TRUE \t FALSE \t %d \n", TRUE || FALSE);
 printf ("TRUE \t TRUE \t %d \n", TRUE || TRUE);
 exit(0);
 }
