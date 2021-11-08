/* $ gcc CharacterDemo.c -o CharacterDemo
$ ./CharacterDemo 
The integer value of character A is 65.
The integer value of character a is 97.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
   char c1, c2, c3, c4;
 
   c1 = 'A';
   c2 = 'a';
 
   c3 = 'Z';
   c4 = 'z';

   printf("The integer value of character %c is %d.\n", c1, c1);
   printf("The integer value of character %c is %d.\n", c2, c2);
   printf("The integer value of character %c is %d.\n", c3, c3);
   printf("The integer value of character %c is %d.\n", c4, c4);

  exit(0);
 }
