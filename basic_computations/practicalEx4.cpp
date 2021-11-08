#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a = 1, n = 100, d = 1;
  double sum1, sum2=0;
  //a. By formula
  sum1 = (n / 2.0) * (2 * a + (n - 1) * d);
  printf("The sum of the numbers is %5.0lf\n", sum1);
  //b. By loop
  for(int i=1;i<=100;i++)
  sum2=sum2+i;
  printf("The sum of the numbers is %5.0lf\n", sum2);
  system("pause");
  return 0;
}
