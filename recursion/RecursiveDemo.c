/*
$ gcc RecursiveDemo.c -o RecursiveDemo
$ ./RecursiveDemo
The value of sum1 is 5050.
The value returned by fRecur() is 5050.
*/
/*
Note: Recursive functions are useful in making clearer and simpler implementations of algorithms.
On the other hand, however, recursive functions may run slower than their iterative equivalents
due to the overhead of repeated function calls.
*/

#include <stdlib.h>
#include <stdio.h>

enum con
{
  MIN_NUM = 0,
  MAX_NUM = 100
};

int fRecur(int n)
{
  if (n == MIN_NUM)
    return 0;
  return fRecur(n - 1) + n;
}

int main()
{
  int i, sum1, sum2;

  sum1 = sum2 = 0;

  for (i = 1; i <= MAX_NUM; i++)
    sum1 += i;
  printf("The value of sum1 is %d.\n", sum1);
  sum2 = fRecur(MAX_NUM);
  printf("The value returned by fRecur() is %d.\n", sum2);
  exit(0);
}
