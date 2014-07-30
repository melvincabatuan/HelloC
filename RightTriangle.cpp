/********************************************
Title: Hello World App
Brief Description: This prints Hello, LBYEC71-EF2!
Author: Melvin Cabatuan
Last Modified: June 25, 2014
********************************************/

#include <stdio.h> // standard I/O needed by printf and scanf
#include <stdlib.h> // needed by system()

int main()
{
   /// 1. Declaration of Variables
   float a = 0; // side a initialized to zero of right triangle 
   float b = 0; // side b of right triangle
   
   /// 2. Prompt the user to input values
   printf("Input the first sides of the right triangle:  \n");
   
   /// 3. Read the values
   scanf("%f %f", &a, &b);
   
   /// 4. ECHOING
   printf("The numbers that you input are %.2f and %.2f.", a,b);
    
   /// 5. Compute the hypotenuse 
   
   
   /// 6. Print the result
   // The right triangle of sides ___ and ___ has a hypotenuse of ___.
   // 2 decimal places
    
    
   system("PAUSE");
   return 0;  
}
