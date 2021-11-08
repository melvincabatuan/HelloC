#include <stdio.h>
#include <math.h>


main()
{
   double f = 5.85;
   int n = (int) (100 * f);
   printf("(int) (100 * %.2f) = %d", f, n);    // n = 584
   printf("\n");
}
