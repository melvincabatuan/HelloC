/* 
$ gcc ArrayPrint.c -o ArrayPrint
$ ./ArrayPrint
array_ch[0] contains: H
array_ch[1] contains: e
array_ch[2] contains: l
array_ch[3] contains: l
array_ch[4] contains: o
array_ch[5] contains: !
array_ch[6] contains: 
Put all elements together(Method I):
Hello!
Put all elements together(Method II):
Hello!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  int i;
 
  for (i=0; i<7; i++)
      printf("array_ch[%d] contains: %c\n", i, array_ch[i]);
  
  printf( "Put all elements together(Method I):\n");

  for (i=0; i<7; i++)
       printf("%c", array_ch[i]);
 
  printf( "\nPut all elements together(Method II):\n");
  printf( "%s\n", array_ch);
  exit(0);
 }
