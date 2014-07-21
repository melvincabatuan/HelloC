/*
$ g++ diamond.cpp -o diamond
$ ./diamond 
Enter number of rows to be printed (odd number): 
13
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
#include <stdio.h>
#include <math.h>
 
int main()
{
  int r, n, c, k, space = 1;
 
  printf("Enter number of rows to be printed (odd number): \n");
  scanf("%d", &r);
 
  n = ceil((r + 1)/2); 
  space = n - 1;
 
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space--;
 
    for (c = 1; c <= 2*k-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  space = 1;
 
  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
 
    space++;
 
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");
 
    printf("\n");
  }
 
  return 0;
}
