/*
This program computes the sum of numbers between two numbers, inclusive.
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

#define MIN_NUM 2
#define MAX_NUM 5

int recursive_sum(int minimum, int maximum)
{
  if (maximum == minimum)
    return minimum;
  return recursive_sum(minimum, maximum - 1) + maximum;
}

int main()
{
  int sum1, sum2;
  sum1 = sum2 = 0;

  for (int i = MIN_NUM; i <= MAX_NUM; i++)
    sum1 += i;
  printf("The value of sum1 is %d.\n", sum1);
  sum2 = recursive_sum(MIN_NUM, MAX_NUM);
  printf("The value returned by fRecur() is %d.\n", sum2);
  exit(0);
}
