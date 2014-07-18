/* 
$ gcc SimpleFor2.c -o SimpleFor2
$ ./SimpleFor2 
Enter a character:
(input x to exit)
a
a
b
b
c
c
x
x
Out of the for loop. Bye!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int c;

  printf("Enter a character:\n(input x to exit)\n");
 
  for ( c=' '; c != 'x'; ) {
      c = getc(stdin);
      putchar(c);
   }
 printf("\nOut of the for loop. Bye!\n");
 exit(0);
 }
