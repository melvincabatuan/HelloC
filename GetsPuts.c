/* 
$ gcc GetsPuts.c -o GetsPuts
$ ./GetsPuts 
Enter a string less than 80 characters:
Melvin K. Cabatuan, ECE
The entered string is (in uppercase):
MELVIN K. CABATUAN, ECE
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 char str[80];
 int i, delta = 'a' - 'A';
 
 printf("Enter a string less than 80 characters:\n");
 gets( str );

 i = 0;
 while (str[i]){
 if ((str[i] >= 'a') && (str[i] <= 'z'))
    str[i] -= delta; /* convert to upper case */
    ++i;
 }

 printf("The entered string is (in uppercase):\n");
 puts( str );
 exit(0);
 }
