#include <stdlib.h>
#include <stdio.h>

/* This function adds two integers
x, y integers to be added
x + y result
*/
int add(int x, int y)
{
   return x + y;
}

/* This function adds three integers
x, y, z integers to be added
x + y + z result
*/
int add3(int x, int y, int z)
{
   return x + y + z;
}

int main()
{
   int x, y, z;
   printf("Input two integers \n");
   scanf("%d%d", &x, &y);
   printf("The sum of %d and %d is %d.\n", x, y, add(x, y));
   printf("Input three integers \n");
   scanf("%d%d%d", &x, &y, &z);
   printf("The sum of %d, %d, and %d is %d.\n", x, y, z, add3(x, y, z));
   exit(0);
}

/*
$ gcc AddFunctionDemo.c -o AddFunctionDemo
$ ./AddFunctionDemo
Input two integers
5 18
The sum of 5 and 18 is 23.
Input three integers
6 3 21
The sum of 6, 3, and 21 is 30.

*/