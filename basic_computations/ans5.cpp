#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a = 1, n = 100, d = 1;
  double sum;

  sum = (n / 2.0) * (2 * a + (n - 1) * d);
  printf("The sum of the numbers is %5.0lf\n", sum);

  system("pause");
  return 0;
}
