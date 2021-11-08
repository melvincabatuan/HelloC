/* 
$ gcc ArrayDemo.c -o ArrayDemo
$ ./ArrayDemo 
array_int[0] is initialized with 1.
array_int[1] is initialized with 2.
array_int[2] is initialized with 3.
array_int[3] is initialized with 4.
array_int[4] is initialized with 5.
array_int[5] is initialized with 6.
array_int[6] is initialized with 7.
array_int[7] is initialized with 8.
array_int[8] is initialized with 9.
array_int[9] is initialized with 10.
*/

#include <stdlib.h>
#include <stdio.h>

 void main()
 {
 int i;
 int array_int[10];
 
 for (i=0; i<10; i++){
    array_int[i] = i + 1;
    printf( "array_int[%d] is initialized with %d.\n", i, array_int[i]);
 }
 
 printf("array_int = %p\n", array_int);
 printf("array_int[0] = %p\n", &array_int[0]);
 printf("array_int[1] = %p\n", &array_int[1]);
 printf("array_int[2] = %p\n", &array_int[2]);
 printf("array_int[9] = %p\n", &array_int[9]);

 exit(0);
}
