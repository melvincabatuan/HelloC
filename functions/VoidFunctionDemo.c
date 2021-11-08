/* 
$ gcc VoidFunctionDemo.c -o VoidFunctionDemo
$ ./VoidFunctionDemo 
Before the GetDateTime() function is called.
Within GetDateTime().
Current date and time is: Fri Jul 18 08:18:37 2014

After the GetDateTime() function is called.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void GetDateTime(void);

 void main()
 {
  printf("Before the GetDateTime() function is called.\n");
  GetDateTime();
  printf("After the GetDateTime() function is called.\n");
  exit(0);
}

/* GetDateTime() definition */
void GetDateTime(void)
{
 time_t now;
 
 printf("Within GetDateTime().\n");
 time(&now);
 printf("Current date and time is: %s\n", asctime(localtime(&now)));
}
