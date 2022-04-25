/* Prints Fibonacci numbers */

#include <stdio.h>

int fibonacci(int n)
{
   if (n == 0 || n == 1)
      return n;
   else
      return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
   for (int i = 0; i <= 10; i++)
      printf("Fibonacci(%d) = %d\n", i, fibonacci(i));
   return 0;
}
