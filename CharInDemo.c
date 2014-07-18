/* 
$ gcc CharInDemo.c -o CharInDemo
$ ./CharInDemo 
Please type in one character:
D
The character you just entered is: D
The character you just entered is:D
 Please type in another character:
X
The character you just entered is: X
The character you just entered is:X
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  int c;

 printf("Please type in one character:\n");
 c = getc( stdin ); // or getchar()
 printf("The character you just entered is: %c\n", c);
 /// or
 printf("The character you just entered is:");
 putc(c, stdout); // or putchar(c)

 getchar(); // absorbs the new line character buffered from  previous input

 printf("\n Please type in another character:\n");
 c = getchar(); // or getc( stdin )
 printf("The character you just entered is: %c\n", c);
 printf("The character you just entered is:");
 putchar(c);
 printf("\n");

 exit(0);
}
