#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double E = 25, R = 33, L = 15, t = 0.12;
  long double i;

  i = (E / R) * (1 - exp(-R * t / L));
  printf("The electrical current in amps is %5.9Lf ", i);

  system("pause");
  return 0;
}
