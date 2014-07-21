/*
$ gcc DefineDemo.c -o DefineDemo
PhD:~/HelloC$ ./DefineDemo 
The original values in array:
array[0]: -10
array[1]: -20
array[2]: -30
array[3]: -40
array[4]: -50
array[5]: -60
array[6]: -70
array[7]: -80

Applying the ABS macro:
ABS(-10):  10
ABS(-20):  20
ABS(-30):  30
ABS(-40):  40
ABS(-50):  50
ABS(-60):  60
ABS(-70):  70
ABS(-80):  80
*/

#include <stdio.h>

#define METHOD "ABS"
#define ABS(val) ((val) < 0 ? -(val) : (val))
#define MAX_LEN 8
#define NEGATIVE_NUM -10

main()
   {
   char *str = METHOD;
   int array[MAX_LEN];
   int i;
 
   printf("The original values in array:\n");
  
   for (i=0; i<MAX_LEN; i++){
      array[i] = (i + 1) * NEGATIVE_NUM;
      printf("array[%d]: %d\n", i, array[i]);
   }
 
   printf("\nApplying the %s macro:\n", str);

   for (i=0; i<MAX_LEN; i++){
      printf("ABS(%d): %3d\n", array[i], ABS(array[i]));
    }
   return 0;
}
