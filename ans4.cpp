#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int E = 25, R = 33, L = 15;
  double e = 2.718, t = 0.12;
  long double  i;

  i = (E * pow((1 - e), -(R/L)*t)) / R;
  printf("The electrical current in amps is %5.9f " ,i);

  system("pause");
  return 0;
}
