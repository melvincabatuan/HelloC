/********************************************
Title: IfElseDemo
Brief Description: This is simple program illustrating if-else
Author: Melvin Cabatuan
Last Modified: June 25, 2014
********************************************/

#include <time.h>
#include <stdio.h>  // standard I/O needed by printf and scanf
#include <stdlib.h> // needed by system()

main()
{
   /// 1. Generate a random number
   srand(time(NULL));
   float number = rand() % 100 + 1;

   /// 2. ECHOING
   printf("Your random score is %.2f.\n", number);

   /// 3. If-else demo
   if (number > 70)
      printf("Congratulations!!! You PASSED!\n");
   else
      printf("Better luck next term!\n");
   system("PAUSE");
}
