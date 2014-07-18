/* 
$ gcc SimpleWhile.c -o SimpleWhile
$ ./SimpleWhile 
Enter a character:
(input x to exit)
a  
a
b
b
k
k
x
x
Out of the while loop. Bye!

*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int c = ' ';

  printf("Enter a character:\n(input x to exit)\n");
 
  while (c != 'x') {
      c = getc(stdin);
      putchar(c);
   }
 printf("\nOut of the while loop. Bye!\n");
 exit(0);
 }
