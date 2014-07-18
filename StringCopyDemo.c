/* 
$ gcc HelloDon.c -o HelloDon 
$ ./HelloDon 
Hello Don, Hello peg!
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 void main()
 {
 char str1[] = "Copy a string.";
 char str2[15];
 char str3[15];
 int i;
 
 /* I. with strcpy() */
 strcpy(str2, str1);
 
 /* II. without strcpy() */
 for (i=0; str1[i]; i++)
     str3[i] = str1[i];
 str3[i] = '\0';
 
 printf("The content of str2: %s\n", str2);
 printf("The content of str3: %s\n", str3); 
 printf("Note: str1 == str2? %d\n", str1 == str2);
 printf("Note: str1 == str3? %d\n", str1 == str3);
 printf("Note: str2 == str3? %d\n", str2 == str3);
 exit(0);
 }
