/*
Title: My first program
Brief Description: 
    This program prints Hello World!
Author: Melvin Cabatuan
Date Modified: June, 30, 2014
*/

#include <stdio.h> // needed by printf()
#include <stdlib.h> // needed by system()


main()
{
  float x, y, sum; // stores the two numbers and their sum
  
  /// 1. Input two numbers
  printf("Enter two numbers: \n");
  
  /// 2. Read the two numbers and store in variables x and y
  scanf("%f %f", &x, &y );
  
  /// 3. ECHOING
  printf("The numbers you input are %.2f and %.2f. \n", x, y);
  
  /// 4. Compute sum
  sum = x + y ;
  
  /// 5. Display sum
  //printf("The sum of %f and %f is equal to %f. \n", x, y, sum);
  printf("%.2f + %.2f = %.2f \n", x, y, sum);
  
  system("PAUSE");
  
  
  
  
}
