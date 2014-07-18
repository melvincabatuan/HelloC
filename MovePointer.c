/* 
$ gcc MovePointer.c -o MovePointer
$ ./MovePointer 
Current position of ptr_ch:  0xbfc85293
The position after ptr_ch + 1:  0xbfc85294
The position after ptr_ch + 2:  0xbfc85295
The position after ptr_ch - 1:  0xbfc85292
The position after ptr_ch - 2:  0xbfc85291
Current position of ptr_int:  0x80485c9
The position after ptr_int + 1:  0x80485cd
The position after ptr_int + 2:  0x80485d1
The position after ptr_int - 1:  0x80485c5
The position after ptr_int - 2:  0x80485c1
Current position of ptr_db:  0xb7781ff4
The position after ptr_db + 1:  0xb7781ffc
The position after ptr_db + 2:  0xb7782004
The position after ptr_db - 1:  0xb7781fec
The position after ptr_db - 2:  0xb7781fe4

*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  char sp = ' ';
  char *ptr_ch = &sp;
  int *ptr_int;
  double *ptr_db;

  /* char pointer ptr_ch */
  /* 1 byte interval */
  printf("Current position of ptr_ch:  %p\n", ptr_ch);
  printf("The position after ptr_ch + 1:  %p\n", ptr_ch + 1);
  printf("The position after ptr_ch + 2:  %p\n", ptr_ch + 2);
  printf("The position after ptr_ch - 1:  %p\n", ptr_ch - 1);
  printf("The position after ptr_ch - 2:  %p\n", ptr_ch - 2);

 /* int pointer ptr_int */
 /* 4 bytes interval */
  printf("Current position of ptr_int:  %p\n", ptr_int);
  printf("The position after ptr_int + 1:  %p\n", ptr_int + 1);
  printf("The position after ptr_int + 2:  %p\n", ptr_int + 2);
  printf("The position after ptr_int - 1:  %p\n", ptr_int - 1);
  printf("The position after ptr_int - 2:  %p\n", ptr_int - 2);

 /* double pointer ptr_ch */
 /* 8 bytes interval */
  printf("Current position of ptr_db:  %p\n", ptr_db);
  printf("The position after ptr_db + 1:  %p\n", ptr_db + 1);
  printf("The position after ptr_db + 2:  %p\n", ptr_db + 2);
  printf("The position after ptr_db - 1:  %p\n", ptr_db - 1);
  printf("The position after ptr_db - 2:  %p\n", ptr_db - 2);
  exit(0);
 }
