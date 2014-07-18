/* 
$ gcc HelloDon.c -o HelloDon 
$ ./HelloDon 
Hello Don, Hello peg!
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int total_byte;
 int array_int[10];
 
 total_byte = sizeof (int) * 10;
 printf( "The size of int is %d-byte long.\n", sizeof (int));
 printf( "The array of 10 ints has total %d bytes.\n", total_byte);
 printf( "The address of the first element:  %p\n", &array_int[0]);
 printf( "The address of the last element:  %p\n", &array_int[9]);
 exit(0);
 }
