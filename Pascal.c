/* 
$ ./Pascal 
Enter the number of levels: 12
                                                                          1
                                                                       1     1
                                                                    1     2     1
                                                                 1     3     3     1
                                                              1     4     6     4     1
                                                           1     5    10    10     5     1
                                                        1     6    15    20    15     6     1
                                                     1     7    21    35    35    21     7     1
                                                  1     8    28    56    70    56    28     8     1
                                               1     9    36    84   126   126    84    36     9     1
                                            1    10    45   120   210   252   210   120    45    10     1
                                         1    11    55   165   330   462   462   330   165    55    11     1
                                      1    12    66   220   495   792   924   792   495   220    66    12     1

*/

int factorial(int n)
{
  int product = 1;
  if(n == 0 || n == 1)
     return product;
  int i;
  for( i = 1; i <= n; i++)
        product *= i;
  return product;
}


#include <stdlib.h>
#include <stdio.h>

 void main()
 {
  long int n;
  char s = ' ';
  printf("Enter the number of levels: ");
  scanf("%d",&n);

  /// Test factorial
 // printf("The factorial of %d is %d.\n", n, factorial(n));
  
 
  int i, ii, j;
  for (i = 0; i <= n; i++){
      for (ii = 0; ii < n - (1 + i/2); ii++) {         
          printf("%6c", s);
      }
      if (i % 2 == 0 )
          printf("%3c", s);
      for (j = 0; j <= i; j++)
         printf("%6d",factorial(i)/(factorial(j)*factorial(i-j)));     
      printf("\n");
  }
  exit(0);
 }
