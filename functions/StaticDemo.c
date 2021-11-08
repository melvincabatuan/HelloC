/* 
$ gcc StaticDemo.c -o StaticDemo
$ ./StaticDemo 
This is the function call of 1,
This is the function call of 1,
the addition of 0 and 5 is 5.

This is the function call of 2,
This is the function call of 1,
the addition of 1 and 4 is 5.

This is the function call of 3,
This is the function call of 1,
the addition of 2 and 3 is 5.

This is the function call of 4,
This is the function call of 1,
the addition of 3 and 2 is 5.

This is the function call of 5,
This is the function call of 1,
the addition of 4 and 1 is 5.
*/

#include <stdlib.h>
#include <stdio.h>

/* the add_two function */
 int add_two(int x, int y)
 {
 static int counter1 = 1;
 int counter2 = 1;

 printf("This is the function call of %d,\n", counter1++);
 printf("This is the function call of %d,\n", counter2++);
 return (x + y);
 }

 void main()
 {
 int i, j;
 
 for (i=0, j=5; i<5; i++, j--)
    printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
 exit(0);
 }
