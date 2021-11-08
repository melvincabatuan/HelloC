/* 
$ gcc HelloDon.c -o HelloDon 
$ ./HelloDon 
Hello Don, Hello peg!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int c;
 
  printf("Enter a character:\n(enter x to exit)\n");
  
  while (1) {
    c = getc(stdin);
    if (c == 'x')
       break;
  }
 printf("Break the infinite while loop. Bye!\n");
 exit(0);
 }
